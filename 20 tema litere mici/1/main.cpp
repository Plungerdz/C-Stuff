//de la var 2
#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for (int i=0; i<s.size(); i++) {
        while (s[i]>='a' && s[i]<='z') {
            s.erase(i,1);
        }
    }

    if (s=="") {
        cout<<"CUVANT VID";
    } else {
        cout<<s;
}
    }

