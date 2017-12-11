// Example program
#include <iostream>
#include <string>
using namespace std;
int gcd(int a, int b) {
    if (a==b) return a;
    else if (a>b) return gcd(a-b,b);
    else return gcd(a,b-a);
}
int phi(int x) {
    int res=0;
    for (int i=1; i<=x; i++) {
        if (gcd(i,x)==1) res++;
    }
    return res;
}
int main()
{
 cout<<phi(23);
}
