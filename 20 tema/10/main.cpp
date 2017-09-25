//var 39
#include <iostream>

using namespace std;

int main()
{
    string s, voc="aeiou";
    getline(cin,s);
    bool in=true;
    int j;
    char aux;
    int i=0, start=1;
    j=i;
    if (voc.find(s[i])<=4) {
    while (s[j]!=' ') j++;
        j--;
        for (int k=i; k<=(j+i)/2; k++) {
            int t=j-k+i;
            aux=s[k];
            s[k]=s[t];
            s[t]=aux;
        }
    start=j;
    }
    for (i=start; i<s.size(); i++) {
        j=i;
        if (voc.find(s[i])<=4 && s[i-1]==' ') {
            while (s[j]!=' ' && j<s.size()) j++;
            j--;
            for (int k=i; k<=(j+i)/2; k++) {
                int t=j-k+i;
                aux=s[k];
                s[k]=s[t];
                s[t]=aux;
            }

        }
        i=j;
    }
    cout<<s;
}
