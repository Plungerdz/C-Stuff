#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream fin("bac.in");
ofstream fout("bac.out");

int main()
{
    int n; vector<int> nuri;
    while (fin>>n) {
        nuri.push_back(n);
    }
    vector<int> c;
    int mx=-2e15, inc=0;
    for (int& x : nuri) {
    while (x) {
        mx=max(mx,x%10);
        c.push_back(x%10);
        x/=10;
    }
    int f[mx];
    for (int i=0; i<mx; i++) {
        f[i]=0;
    }
    for (int i=0; i<c.size(); i++) {
        f[c[i]]++;
    }
    for (int i=0; i<mx; i++) {

        if (f[i]==1) { fout<<i<<" ";}
    }
    }
}
