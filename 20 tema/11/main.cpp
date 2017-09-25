//var 39
#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int startCuv=0, endCuv=0;
    bool k;
    while (s[endCuv]!='*') endCuv++;
    endCuv--;
    for (int i=endCuv+1; i<s.size(); i++) {
        k=true;
        if (i+endCuv<s.size()) {
            for (int j=0; j<=endCuv; j++) {
                if (s[i+j]!=s[j]) {
                    k=false;
                    break;
                }
            }
        }


        if (k) s.erase(i,endCuv+1);

    }
    s.erase(0,endCuv+1);
    cout<<s;
}
