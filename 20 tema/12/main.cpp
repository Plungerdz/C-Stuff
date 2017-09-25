//var 42
#include <iostream>

using namespace std;

int main()
{
    string s,voc="aeiou";
    getline(cin,s);
    bool fara=true;
    for (int i=0; i<s.size(); i++) {
        if (voc.find(s[i])<=4) {
            cout<<s[i]<<" ";
            fara=false;
        }
    }
    if (fara) cout<<"fara vocale";
}
