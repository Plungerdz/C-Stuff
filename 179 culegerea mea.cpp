#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

ifstream fin("submultime.in");
ofstream fout("submultime.out");

int main()
{
    int m, n; fin>>m; int a[m];
    for (int i=0; i<m; i++) {
        fin>>a[i];
    }
    fin>>n; int b[n];
    for (int i=0; i<n; i++) {
        fin>>b[i];
    }
    sort(a,a+m);
    sort(b,b+n);
    for (int i=n-m; i<n; i++) {
        fout<<b[i]<<" ";
    }
}
