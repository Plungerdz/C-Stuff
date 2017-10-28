#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("trandafir.in");
ofstream fout("trandafir.out");

int n;
unsigned long long int mx=0, mn=2e31-1, x;

int main()
{
    fin>>n;
    for (int i=0; i<n; i++) {
        fin>>x;
        if (mx<x) mx=x;
        if (mn>x) mn=x;
    }
    fout<<mx-mn+n-1;
}
