// de fapt panta de lungime maxima
#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

int n, mx=-2e15, lmx=-2e15, pos;

ifstream fin("subsir.in");
ofstream fout("subsir.out");

int main()
{
    fin>>n; int v[n];
    for (int i=0; i<n; i++) fin>>v[i];
    /*
    for (int i=0; i<n; i++) {
            mx=max(mx,v[i]);
    }
    int l[mx];
    */
    /*
    for (int i=0; i<n; i++) {
            l[i]=0;
    }
    */
    for (int i=0; i<n; i++) {
        int j=0;
        while (v[i+j]+1==v[i+j+1]) {
            j++;
        }
        /*
        l[i]=j;
        */
        if (lmx<j) {
            lmx=j;
            pos=i;
        }
    }
    for (int i=pos; i<pos+lmx+1; i++) fout<<v[i]<<" ";
}
/*
14
1
2
3
8
6
7
10
11
12
13
3
1
4
5
*/
