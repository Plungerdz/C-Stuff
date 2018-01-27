#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>


using namespace std;

bool comp(int x, int y) {
    srand(time(NULL));
    return bool(rand()%2);
}

bool isSorted(vector<int> x) {
    bool ret=true;
    for (int i=0; i<x.size()-1; i++)
    if (x[i]>x[i+1]) {ret=false;
    break;
    }
    return ret;
}
int n, temp; vector<int> x;
int main()
{
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>temp;
        x.push_back(temp);
    }
    while (!isSorted(x)) sort(x.begin(),x.end(),comp);
    for (int i=0; i<n; i++) {
        cout<<x[i]<<" ";
    }
}
