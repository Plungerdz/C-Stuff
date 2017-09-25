//var 21
#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for (int i=0; i<s.size()-1; i++) {
        if (s[i]==s[i+1] && s[i]!='*') cout<<s[i]<<s[i+1]<<endl;
    }

}
