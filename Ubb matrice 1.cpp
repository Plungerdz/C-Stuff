#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool eprim(int x) {
    if (x==1) return false;
    for (int i=2; i<=sqrt(x); i++) {
        if (x%i==0) return false;
    }
    return true;
}

int xp(int x) {
    int inc=0, res=1;
    while (inc<x) {
        if (eprim(res)) inc++;
        res++;
    }
    res--;
    return res;
}

void af(vector<vector<int>> m) {
    int n = m.size();
    for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cout<<m[i][j]<<" ";
            }
            cout<<endl;
        }
}
int main()
{
    //1  2  3  4  5   6   7   8   9   10  11  12  13  14  15  16  17
    //2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59
    int n; cin>>n;
    vector<vector<int>> m;
    for (int i=1; i<=n; i++) {
        vector<int> lin;
        for (int j=1; j<=n; j++) {

            if (i+j==n+1) {lin.push_back(0);}
            else if (i+j>n+1) lin.push_back(j);
            else lin.push_back(xp(j));

        }
        m.push_back(lin);
    }
    af(m);
    return 0;
}

