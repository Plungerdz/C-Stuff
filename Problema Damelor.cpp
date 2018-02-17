//ms sergiu
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;


bool ataca(bool* m, int x, int y) {
    /*
    for (int i=0; i<x; i++) {
        int horz=0;
        for (int j=0; j<y; j++) {
            if (m[y*i+j]) horz++;
            if (horz>1) return true;
        }
    }
    for (int j=0; j<y; j++) {
        int vert=0;
        for (int i=0; i<x; i++) {
            if (m[y*i+j]) vert++;
            if (vert>1) return true;
        }
    }
    */


    for (int i=0; i<x; i++) {
        for (int j=0; j<y; j++) {
        //int i = 0, j = 0;
            if (!m[y*i+j]) continue;
            for (int inc=1; inc<max(x,y); inc++) {
                if (j>inc-1 && i!=inc-1 && inc<=i && inc<=j) {
                    if (m[y*(i-inc)+j-inc])
                    {
                        cout << "1 " << inc << ": " << i << " " << j << "\n\n";
                        return true;
                    }
                }
                if (j+inc-1<x-1 && i>inc-1 && inc<=i) {
                    if (m[y*(i-inc)+j+inc])
                    {
                        cout << "2 " << inc << ": " << i << " " << j << "\n\n";
                        return true;
                    }
                }
                if (j>inc-1 && i+inc-1<y-1 && inc <= j) {
                    if (m[y*(i+inc)+j-inc])
                    {
                        cout << "3 " << inc << ": " << i << " " << j << "\n\n";
                        return true;
                    }
                }
                if (j+inc-1<x-1 && i+inc-1<y-1) {
                    if (m[y*(i+inc)+j+inc])
                    {
                        cout << "4 " << inc << ": " << i << " " << j << "\n\n";
                        return true;
                    }
                }
            }
        }
    }


    return false;
}

ifstream fin("dame.in");
ofstream fout("dame.out");

int n;
int main()
{
    //cout<<"n=";
    fin>>n; bool m[n][n]; int t;
    /*
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            //cout<<"m["<<i<<"]["<<j<<"]=";
            fin>>t;
            m[i][j] = bool(t);
        }
    }
    */

    //flatten
    bool mpr[n*n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            mpr[n*i+j] = m[i][j];
        }
    }
    /*
    for (float i=-1; i<=1; i++) {
        for (float j=-1; j<=1; j++) {
            cout<<"i: "<<i<<" j: "<<j<<" ";
        }
        cout<<endl;
    }
    */
    /*
    for (int i=0; i<n*n; i++) {
        cout<<mpr[i]<<" ";
    }
    */

}
