#include <iostream>
#include <fstream>

typedef unsigned long long ull;
using namespace std;

ull fexp(ull a, ull b) {
    ull p=a, r=1;
    while (b) {
        if (b & 1) {
            r = r*p;
        }
        p = p*p;
        b>>=1;
    }
    return r;
}

ull fact(ull n) {
    if (n==0) return 1;
    else return n*fact(n-1);
}
int main()
{
    ifstream fin("gfact.in");
    ofstream fout("gfact.out");

    ull a, p, q, b=1;
    fin>>p>>q;
    a=fexp(p,q);
    while (fact(b)%a!=0) {
        b++;
    }
    fout<<b;
}
