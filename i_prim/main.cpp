#include <iostream>
#include <cmath>

using namespace std;

bool eprim(int x) {
    for (int i=2; i<sqrt(x); i++) {
        if (x%i==0) return false;
    }
    return true;
}

int i_prim(int n) {
    int p1=n, p2=n;
    while (!eprim(p1) || !eprim(p2)) {
        if (!eprim(p1)) p1--;
        if (!eprim(p2)) p2++;
    }
    return p2-p1;
}
int main()
{
    cout << i_prim(20);
}
