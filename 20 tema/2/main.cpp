//din var 6
#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int i=0;
    bool in=true;
    while (i<s.size()) {
        while (s[i]==' ') {
            in=true;
            i++;
        }
        if (in) {
            s[i]-=32;
            in=false;
        }
        i++;
    }
    cout<<s;
    return 0;
}
