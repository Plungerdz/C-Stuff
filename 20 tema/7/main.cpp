//var 32
#include <iostream>

using namespace std;

int main()
{
    char c1, c2;
    string s;
    cin>>c1;
    cin>>c2;
    getline(cin,s);
    cout<<s<<endl;
    for (int i=0; i<s.size(); i++) {
        if (s[i]==c1) s[i]=c2;
        else if (s[i]==c2) s[i]=c1;
    }
    cout<<s;
}
