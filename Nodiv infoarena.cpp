#include <iostream>
#include <fstream>

using namespace std;


ifstream fin("nodiv.in");
ofstream fout("nodiv.out");

//int t;
/*
int fact(int x) {
    if (x==0) return 1;
    return x*fact(x-1);
}
*/
void printArray(int* v, int n) {
    for (int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
}
/*
int* next(int* v, int n) {
    int i=n-1, k=0, res[n];
    while (v[i]==0) i++;
    for (int j=0; j<n; j++) if (v[i]==1) k++;

}
*/

int fexp(int x, int n){
    //if n < 0  then return exp_by_squaring(1 / x, -n);
    if (n == 0) return  1;
    else if (n == 1)  return  x ;
    else if (n % 2 == 0)  return fexp(x * x,  n / 2);
    else if (n % 2 == 1) return x * fexp(x * x, (n - 1) / 2);
}
int n;
int main()
{

    int aux[n], v[n];
    for (int i=0; i<n; i++) aux[i]=0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<(n-i); j++) {
                for (int k=0; k<n; k++) {
                    v[k]=aux[k];
                }
                v[j]=1;
                /*
                for (int k=0; k<n; k++) {
                    cout<<v[k]<<" ";
                }
                */
                cout<<endl;
                if (j==(n-i-1)) {
                    for (int k=0; k<n; k++) {
                        aux[k]=v[k];
                    }
                }
        }
    }


}
