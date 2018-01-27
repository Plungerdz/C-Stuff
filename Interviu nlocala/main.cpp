#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

ifstream fin("interviu.in");
ofstream fout("interviu.out");

int n, h=3;
bool works;

int main()
{
    fin>>n; int v[n];
    for (int i=1; i<=n; i++) {
        fin>>v[i];
    }
    for (int i=4; i<=n; i++) {
        works=true;
        for (int j=1; j<i; j++) {
            if (v[j]>=v[i]) {
                works=false;
                break;
            }
        }
        if (works) {
            h=i;
            break;
        }
        h=i;
    }
    fout<<h;
}
