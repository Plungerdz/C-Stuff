#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("doi.in");
ofstream fout("doi.out");

int doi(int n) {
    int res=0;
    while (n) {
        if (n%2==1) n--;
        else n/=2;
        res++;
    }
    return res;
}
int t, x;
int main()
{
    fin>>t;
    for (int i=0; i<t; i++)  {
    fin>>x;
    fout<<doi(x)<<endl;
    }
}
