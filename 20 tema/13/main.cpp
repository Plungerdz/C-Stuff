//var 45
#include <iostream>

using namespace std;

int main()
{
    string s, aux;
    getline(cin,s);
    for (int i=0; i<s.size();i++) {
        aux=s;
        aux.erase(i,1);
        cout<<aux<<endl;
    }
}
