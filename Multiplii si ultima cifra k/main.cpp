#include <iostream>

using namespace std;

int multiplu(int a[100], int n, int k) {
    int nr=0;
    for (int i=0; i<n; i++) {
        if (a[i]%k==0 && a[i]%10==k) {
            nr++;
        }
    }
    return nr;
}
int main()
{
    int p[]={9,273,63,83,93,123};
    cout << multiplu(p,6,3);
}
