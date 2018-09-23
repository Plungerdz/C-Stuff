#include <iostream>
#include <vector>
#define Fntype bool (*)(int, int)

using namespace std;

/*
void swap(int* a, int* b) {
 int* aux=a;
 a=b;
 b=aux;
}
*/

/*
int part(vector<int> a, int start, int stop) {
    int i = start + 1;
    int piv = a[start];

    for (int j = start + 1; j <= stop; j++) {
        if (a[j] < piv) {

            //int aux = a[j];
            //a[j] = piv;
            //a[start] = aux;
            //i += 1;

        }
    }
    //int aux = a[i];
    //a[i] = piv;
    //a[i-1] = aux;
    //swap(a.data()+i,a.data()+(i-1));
    return i-1;
}
*/

/*
template<typename F>
vector<int>::iterator part(vector<int> a, int start, int stop, F func) {
    vector<int>::iterator i = a.begin() + (start + 1);
    vector<int>::iterator piv = a.begin() + (start + 1);
    vector<int>::iterator rightEnd = a.begin() + stop;

    for (vector<int>::iterator j = a.begin() + (start + 1); j <= stop; j++) {
        if (func(a[j],piv)) {

            //int aux = a[j];
            //a[j] = piv;
            //a[start] = aux;
            //i += 1;

            //swap_ranges(a.begin()+j,a.begin()+(j+1),a.begin());
            iter_swap(j,start);
            i++;
        }
    }

    //int aux = a[i];
    //a[i] = piv;
    //a[i-1] = aux;

    return i-1;
}
*/

vector<int>::iterator part(vector<int> a, vector<int>::iterator start, vector<int>::iterator stop) {
    vector<int>::iterator i = start + 1;
    vector<int>::iterator piv = start + 1;
    vector<int>::iterator rightEnd = stop;

    for (vector<int>::iterator j = start; j <= stop; j++) {
        if (*j < *piv) {
            iter_swap(j,start);
            i++;
        }
    }
    return i-1;
}

void quickSort(vector<int> a, vector<int>::iterator start, vector<int>::iterator stop) {
    if (start < stop) {
        vector<int>::iterator piv_pos = part(a,start,stop);
        quickSort(a,start,piv_pos-1);
        quickSort(a,piv_pos+1,stop);
    }
}


template<typename Functor>
vector<int>::iterator part(vector<int> a, vector<int>::iterator start, vector<int>::iterator stop, Functor lambda) {
    vector<int>::iterator i = start;
    vector<int>::iterator piv = start;
    vector<int>::iterator rightEnd = stop;

    for (vector<int>::iterator j = start; j != stop; j++) {
        if (lambda(*j,*piv)) {
            iter_swap(j,piv);
            i++;
        }
    }
    return i;
}

template<typename Functor>
void quickSort(vector<int> a, vector<int>::iterator start, vector<int>::iterator stop, Functor lambda) {
    if (start < stop) {
        vector<int>::iterator piv_pos = part(a,start,stop,lambda);
        quickSort(a,start,piv_pos-1,lambda);
        quickSort(a,piv_pos+1,stop,lambda);
    }
}

/*
vector<int>::iterator part(vector<int> a, vector<int>::iterator start, vector<int>::iterator stop, lambda<int,int>& func) {
    vector<int>::iterator i = start + 1;
    vector<int>::iterator piv = start + 1;
    vector<int>::iterator rightEnd = stop;

    for (vector<int>::iterator j = start; j <= stop; j++) {
        if (F(*j,*piv)) {
            iter_swap(j,start);
            i++;
        }
    }
    return i-1;
}

void quickSort(vector<int> a, int start, int stop, lambda<int,int>& func) {
    if (start < stop) {
        int piv_pos = part(a,start,stop,func);
        quickSort(a,start,piv_pos-1,func);
        quickSort(a,piv_pos+1,stop,func);
    }
}
*/

int main()
{
    //const int n=8;
    vector<int> v;
    //int l=sizeof(v)/sizeof(int);
    v.push_back(178);
    v.push_back(-17);
    v.push_back(34);
    v.push_back(25);
    v.push_back(17);
    v.push_back(-25);
    auto cmp = [](int a, int b) { return (a<b); };
    quickSort(v,v.begin(),v.end(),cmp);
    for (int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}
