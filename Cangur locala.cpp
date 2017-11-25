#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cangur.in");
ofstream fout("cangur.out");

unsigned long long int b, inc, x;
int main()
{

    for (int i=0; i<3; i++) {
        fin>>b;
        inc=1;
        x=0;
        if (b==0) fout<<"DA"<<endl;
        else {
         while (x<b) {
        if (inc%3!=0) x+=inc%3;
        else x+=3;
        inc++;
        }
        //cout<<x<<endl;
        if (x==b) fout<<"DA"<<endl;
        else fout<<"NU"<<endl;
        }

    }

    return 0;
}
