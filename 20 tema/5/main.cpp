//var 24
#include <iostream>

using namespace std;

int main()
{
    string a,b; bool k=false;
    cin>>a;
    cin>>b;
    int i=a.size();
    int j=b.size();
    while (a[i]==b[j]) {
        i--;
        j--;
    }
    while (i<a.size()-1) {
        i++;
        cout<<a[i];
    }

}
