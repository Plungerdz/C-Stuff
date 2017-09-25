//var 28
#include <iostream>

using namespace std;

int main()
{
    string s, aux;
    char voc[]={'a','e','i','o','u', 'A', 'E', 'I', 'O', 'U'};
    getline(cin,s);
    for (int i=0; i<5; i++) {
        if (s.find(voc[i])<=s.size()-1) {
            aux=s;
            for (int j=0; j<aux.size(); j++) {
                if (aux[j]==voc[i]) aux.erase(j, 1);
            }
            cout<<aux<<endl;
        }

    }
}
