#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

bool id(int x) {
    vector<int> c;
    while (x) {
        c.push_back(x%10);
        x/=10;
    }
    for (int i=0; i<c.size()-1; i++) {
        if (c[i]!=c[i+1]) return false;
    }
    return true;
}

bool tip1(int x) {
    if (id(x)) return false;
    vector<int> c;
    int mx=x%10;
    while (x) {
        int l=x%10;
        mx=max(mx,l);
        c.push_back(l);
        x/=10;
    }
    if (c.size()==1) return false;
    int f[mx];
    for (int i=0; i<=mx; i++) f[i]=0;
    for (int i=0; i<c.size(); i++) f[c[i]]++;
    for (int i=0; i<c.size(); i++) {
        for (int j=0; j<c.size(); j++) {
            if (i==j) continue;
            if (c[i]<c[j]) {
                if (f[c[i]]>=f[c[j]]) return false;
            }
        }
    }
    return true;
}

bool tip2(int x) {
    if (id(x)) return false;
    vector<int> c;
    int mx=x%10;
    while (x) {
        int l=x%10;
        mx=max(mx,l);
        c.push_back(l);
        x/=10;
    }
    if (c.size()==1) return false;
    int f[mx];
    for (int i=0; i<=mx; i++) f[i]=0;
    for (int i=0; i<c.size(); i++) f[c[i]]++;
    for (int i=0; i<c.size(); i++) {
        for (int j=0; j<c.size(); j++) {
            if (i==j) continue;
            if (c[i]<c[j]) {
                if (f[c[j]]>=f[c[i]]) return false;
            }
        }
    }
    return true;
}

bool comp(int a, int b) {
    if (a>=b) return true;
    return false;
}

ifstream fin("formula.in");
ofstream fout("formula.out");

int x, inc1=0, inc2=0; vector<int> t1, t2; //bool exit=false;
int main()
{


    while (fin>>x) {
        //cout<<x<<" "<<tip1(x)<<" "<<tip2(x)<<endl;
        if (tip1(x)) t1.push_back(x);
        if (tip2(x)) t2.push_back(x);
    }
    if (t1.size() == 0 && t2.size()==0) {
        fout<<0;
        return 0;
    }
    //cout<<endl<<endl;
    sort(t1.begin(),t1.end());
    //for (int i=0; i<t1.size(); i++) cout<<t1[i]<<" ";
    //cout<<endl;
    sort(t2.begin(),t2.end(),comp);
    //for (int i=0; i<t2.size(); i++) cout<<t2[i]<<" ";
    while (1) {
        if (inc1<t1.size()) {
            fout<<t1[inc1]<<" ";
            inc1++;
        }

        if (inc2<t2.size()) {
            fout<<t2[inc2]<<" ";
            inc2++;
        }

        if (inc1==t1.size() && inc2==t2.size()) break;
    }
    return 0;

}
