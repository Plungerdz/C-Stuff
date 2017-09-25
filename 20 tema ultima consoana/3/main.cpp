//var 7
#include <iostream>

using namespace std;

int main()
{
    string s, voc="aeoiou";
    getline(cin,s);
    int i=s.size()-1;
    while (voc.find(s[i])<=5) {
        i--;
    }
    cout<<s[i];
}
