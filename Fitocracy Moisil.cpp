#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("FITOCRACY.in");
ofstream fout("FITOCRACY.out");

int nrclickr(float r0, float r) {
    int res=0, nr=0;
    if (int(r)!=r) {
         while (int(r)!=r) {
            r*=10;
         }
         int aux=r;
         while (aux!=0) {
            aux/=10;
            res++;
         }
         return res;
    }
    res=abs(r-r0);
    int aux=r;
    while (aux!=0) {
        aux/=10;
        nr++;
    }
    if (res<nr) return res;
    else return nr;
}
int nrclickg(float g0, float g) {
    int res=0, nr=0;
    if (int(g)!=g) {
         while (int(g)!=g) {
            g*=10;
         }
         int aux=g;
         while (aux!=0) {
            aux/=10;
            res++;
         }
         return res;
    }
    res=abs(g-g0);
    int aux=g;
    while (aux!=0) {
        aux/=10;
        nr++;
    }
    if (res%5==0) res/=5;
    else return nr;

    if (res<nr) return res;
    else return nr;
}
int main()
{
    int n;
    float r0, g0, r, g;
    fin>>n;
    for (int i=0; i<n; i++) {
        fin>>r0>>g0>>r>>g;
        fout<<nrclickr(r0,r)+nrclickg(g0,g)<<" ";
    }
}
