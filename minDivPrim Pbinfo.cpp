#include <iostream>
#include <cmath>

using namespace std;

bool eprim(int x) {
    for (int i=2; i<=sqrt(x); i++) {
        if (x%i==0) return false;
    }
    return true;
}
int minDivPrim(int x) {
    int div=2, res=1;
    bool dwh=false;
    while (x!=1) {
        dwh=false;
        while (x%div==0) {x/=div; dwh=true;}
        if (eprim(div) && dwh) res*=div;
        div++;
    }
    return res;
}
int main()
{
    cout<<minDivPrim(7);
}
