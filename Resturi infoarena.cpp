#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("resturi.in");
ofstream fout("resturi.out");

int main()
{
    int t; fin>>t; int n, x;
    for (int i=0; i<t; i++) {
        fin>>n; int r[n],p[n];
        x=0;
        for (int j=0; j<n; j++) {
            fin>>p[j];
            fin>>r[j];
        }
        bool k;
        do {
            k=true;
            for (int j=0; j<n; j++) {
            if (x%p[j]!=r[j]) {
                k=false;
                break;
            }
            }
            x++;
        }   while (!k);
        x--;
         fout<<x<<endl;
    }

}
