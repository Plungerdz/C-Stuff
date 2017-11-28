#include <iostream>
#include <fstream>

using namespace std;



ifstream fin("atestat.in");
ofstream fout("atestat.out");


void afdcr(int n, int* v) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (v[i]>v[j]) swap(v[i],v[j]);
        }
    }
    for (int i=0; i<n; i++) {
        fout<<v[i]<<" ";
    }
}
bool perf(int x) {
    int s=0;
    for (int i=1; i<x; i++) {
        if (x%i==0) s+=i;
    }
    if (x==s) return true;
    else return false;
}
int n; bool ex=false;
int main()
{
    fin>>n; int v[n];
    for (int i=0; i<n; i++) {
        fin>>v[i];
        if (v[i]%2==0) fout<<v[i]<<" ";
    }
    fout<<endl;
    afdcr(n, v);
    fout<<endl;
    for (int i=0; i<n; i++) {
        if (perf(v[i])) {fout<<v[i]<<" "; ex=true;}
    }
    if (!ex) fout<<"NU EXISTA NUMERE PERFECTE";
}
