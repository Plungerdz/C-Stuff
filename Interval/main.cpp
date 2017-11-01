#include <iostream>

using namespace std;

int interval(int a[100], int n) {
    int nr=0;
    if (a[0]>a[n-1]) swap(a[0],a[n-1]);
    for (int i=0; i<n; i++) {
        if (a[i]>=a[0] && a[i]<=a[n-1]) nr++;
    }
    return nr;
}
int main()
{
    int p[]={12,27,6,8,9,2};
    cout<<interval(p, 6);
}
