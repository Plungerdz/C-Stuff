#include <iostream>
#include <fstream>

using namespace std;

int* permc(int* v, int n){
int aux=v[0];
for (int i=1; i<n; i++) {
    v[i-1]=v[i];
}
v[n-1]=aux;
return v;
}

bool eq(int* a, int l, int* b){
for (int i=0; i<l; i++) {
    if (a[i]!=b[i]) return false;
}
return true;
}

bool pal(int* v, int n) {
    for (int i=0; i<n/2; i++) {
        if (v[i]!=v[n-i-1]) return false;
    }
    return true;
}
ifstream fin("palindrom_ciclic.in");
ofstream fout("palindrom_ciclic.out");

int n;
int* vp;
bool nu=true;

int main()
{

    fin>>n; int v[n];
    for (int i=0; i<n; i++) {
        fin>>v[i];
    }
    vp=permc(v,n);
    if (pal(vp, n)) {
        fout<<"DA 1";
        nu=false;
    } else {
        int nr=1;
        while (!eq(v,n,vp)) {
        vp=permc(vp,n);
        nr++;
        if (pal(vp, n)) {
            fout<<"DA "<<nr;
            nu=false;
            break;
        }
        }
    }
    if (nu) fout<<"NU";


}
