#include <iostream>
#include <fstream>

using namespace std;

int n,k,s;

ifstream fin("prieten.in");
ofstream fout("prieten.out");

int sp(int x) {
    int res=0;
    for (int i=1; i<x; i++){
        res+=x*i+i;
    }
    return res;
}

int main()
{
    fin>>n>>k>>s;
    for (int i=1; i<=k; i++) fout<<n*i+i<<" ";
    fout<<endl;
    for (int i=1; i<=s; i++) {
        if (sp(i)==s) {
            fout<<i;
            break;
        }
    }
}
