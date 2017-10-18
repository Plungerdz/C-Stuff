#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("suma6.in");
ofstream fout("suma6.out");

int main()
{
    int n, s, l, r, q, nr=0;
    fin>>n>>s; int a[n];
    for (int i=1; i<=n; i++) {
        fin>>a[i];
    }
    fin>>q;
    for (int i=0; i<q; i++) {
        nr=0;
        fin>>l>>r;
        for (int j=1; j<=n; j++) {
            for (int k=1; k<=n; k++) {
                if (a[j]+a[k]==s && j>=l && j<=r && k>=l && k<=r && j<k) nr++;
            }
        }
        fout<<nr<<endl;
    }
}
