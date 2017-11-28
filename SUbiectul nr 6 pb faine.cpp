#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

ifstream fin("atestat.in");
ofstream fout("atestat.out");

void afcr(int n, float* v) {
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            if (v[i]>v[j]) swap(v[i],v[j]);
        }
    }
    for (int i=0; i<n; i++) {
        fout<<fixed<<setprecision(2)<<v[i]<<" ";
    }
}
int n, nr=0;
float med=0;
int main()
{


    fin>>n; float v[n];
    for (int i=0; i<n; i++) {
        fin>>v[i];
    }
    for (int i=0; i<n; i++) {
       if (v[i]>0) fout<<fixed<<setprecision(2)<<v[i]<<" ";
       else if (v[i]<0) {
        nr++;
        med+=v[i];
       }
    }
    fout<<endl;
    afcr(n, v);
    fout<<endl;
    fout<<med/float(nr);
}
