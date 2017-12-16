#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream fin("dreptpal.in");
ofstream fout("dreptpal.out");

bool epal(vector<int> v) {
    for (int i=0; i<v.size()/2; i++) {
        if (v[i]!=v[v.size()-i-1]) return false;
    }
    return true;
}
int n, m;
int main()
{
    fin>>n>>m; int v[n][m];
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            fin>>v[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int i=0; i<m; i++) {

        }
    }
}
