#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("sume2.in");
ofstream fout("sume2.out");

int n,k;

int main()
{
    fin>>n>>k; long int v[n],s[n*n];
    for (int i=0; i<n; i++) {
        fin>>v[i];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            s[i+j]=v[i]+v[j];
        }
    }
    sort(s,s+n*n);
    fout<<s[n*n-k];
}
