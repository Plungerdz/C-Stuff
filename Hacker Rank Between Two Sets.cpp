#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (a==b) return a;
    else if (a>b) return gcd(a-b,b);
    else return gcd(a,b-a);
}

int lcm(int a, int b) {
    return (a*b)/gcd(a,b);
}

int gcd(vector<int> x) {
    int res=gcd(x[0],x[1]);
    for (int i=2; i<x.size(); i++) {
        res=gcd(res,x[i]);
    }
    return res;
}

int lcm(vector<int> x) {
    int res=lcm(x[0],x[1]);
    for (int i=2; i<x.size(); i++) {
        res=lcm(res,x[i]);
    }
    return res;
}

int getTotalX(vector <int> a, vector <int> b) {
    // Complete this function
    int total=0;
    for (int i=2; i<=10000; i++) {
        bool is=true;
        for (int j=0; j<a.size(); j++) {
            if (i%a[j]!=0) {
                is=false;
                break;
            }
        }
        if (is==false) continue;
        for (int j=0; j<a.size(); j++) {
            if (i%b[j]!=0) {
                is=false;
                break;
            }
        }
        if (is==false) continue;
        total++;
        
    }
    return total;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
