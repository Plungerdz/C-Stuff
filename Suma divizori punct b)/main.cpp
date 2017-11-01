#include <iostream>

using namespace std;

int sum(int x) {
    int s=0;
    for (int i=1; i<=x; i++) {
        if (x%i==0) s+=i;
    }
    return s;
}
int main()
{
    int n, x, nr=0;
    cout << "n="; cin>>n;
    for (int i=0; i<n; i++) {
        cout<<"nr="; cin>>x;
        if (sum(x)==x+1) nr++;
    }
    cout<<nr;
    return 0;
}
