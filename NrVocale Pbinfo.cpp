#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    string s, voc="aeiou";
    getline(cin,s);

    map<char,int> f;

    for (char c='A'; c<'z'; c++) {
        f[c]=0;
    }
    for (char c='0'; c<'9'; c++) {
        f[c]=0;
    }
    f['.']=0;
    f['!']=0;
    f['?']=0;
    f[' ']=0;
    for (int i=0; i<s.size(); i++) {
        if (s[i]>='A' && s[i]<='Z') s[i]+=32;
    }
    for (int i=0; i<s.size(); i++) {
        if (voc.find(s[i])<=4) f[s[i]]++;
    }
    int mx=-2e15;
    for (map<char,int>::iterator it=f.begin(); it!=f.end(); ++it) {
        mx=max(mx,it->second);
    }
    for (map<char,int>::iterator it=f.begin(); it!=f.end(); ++it) {
        if (it->second==mx) {
            cout<<it->first;
            break;
        }
    }

}
