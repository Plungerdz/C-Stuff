#include <iostream>


namespace r {
    int count(float a[100], int n) {
        float s=0; int nr=0;
        for (int i=0; i<n; i++) {
            s+=a[i];
        }
        s=s/float(n);
        for (int i=0; i<n; i++) {
            if (a[i]>=s) nr++;
        }
        return nr;
    }
}

using namespace std;

int main()
{
    float a[]={12, 7.5, 6.5, 3, 8.5, 7.5};
    cout<<r::count(a,6);
}
