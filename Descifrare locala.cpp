#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("descifrare.in");
ofstream fout("descifrare.out");

string a, b;
bool posibil;

int main()
{   for (int i=0; i<3; i++) {
    fin>>a>>b;
    posibil=false;
    for (int i=0; i<a.size(); i++) {
    string aux=a;
    aux.erase(i,1);
    if (aux==b) {
        posibil=true;
        break;
    }
    }
    if (posibil) fout<<"DA"<<endl;
    else fout<<"NU"<<endl;
    }

    return 0;
}
