//var 33
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s, voc="AEIOU";
    vector<char> cons;
    char aux;
    getline(cin,s);
    bool in=true, push=true;
    int nr=0;
    for (int i=0; i<s.size(); i++) {
        push=true;
        if (s[i]!=' ' && in) {
            nr++;
            in=false;
        } else if (s[i]==' ') in=true;
        for (int j=0; j<cons.size(); j++) {
            if (cons[j]==s[i]) {
                push=false;
                break;
            }
        }
        if (voc.find(s[i])>5 && s[i]!=' ' && push)
            cons.push_back(s[i]);
    }
    for (int i=0; i<cons.size(); i++) {
        for (int j=0; j<cons.size(); j++) {
            if (cons[i]<cons[j]) {
                aux=cons[i];
                cons[i]=cons[j];
                cons[j]=aux;
            }
        }
    }
    cout<<nr<<endl;
    for (int i=0; i<cons.size(); i++) {
        cout<<cons[i]<<" ";
    }
}
