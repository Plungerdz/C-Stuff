#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    float mx=-2e15, nr=0; cin>>n; int x, y; float d[n];
    for (int i=0; i<n; i++) {
        cin>>x>>y;
        d[i]=sqrt(x*x+y*y);
        if (mx<d[i]) mx=d[i];
    }
    cout<<mx<<" ";
    for (int i=0; i<n; i++) {
        if (mx==d[i]) nr++;
    }
    cout<<n
