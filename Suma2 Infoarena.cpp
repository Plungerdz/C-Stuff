#include <iostream>
#include <fstream>

using namespace std;

int n, smx=0;
int main()
{
    cin>>n; int v[n];
    for (int i = 0; i < n; i++) {
        cin>>v[i];
    }
    for (int i = 0; i < n; i += 2) {
        int j = i;
        while ((smx + v[j] > smx) && (j < n-2)) {
            smx += v[j];
            j += 2;
        }
        i=j+2;
    }
    cout<<smx;
    return 0;
}
