#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("subsir.in");
ofstream fout("subsir.out");

bool prop(int x)
{
    int nr=0;
    while (x)
    {
        nr++;
        x/=10;
    }
    return nr==1;
}
int n, mx=-2e15;
vector<int> v;
int main()
{
    while (fin>>n) v.push_back(n);

    int f[v.size()];
    for (int i=0 ; i<v.size(); i++)
    {
        f[i]=0;
        int j=0;
        while (prop(v[i+j]) && (i+j)<v.size())
        {
            j++;
        }
        mx=max(mx,j);
        f[i]=j;
    }
    cout<<prop(v[v.size()-1])<<endl;
    for (int i=0; i<v.size(); i++)
    {
        cout<<f[i]<<" ";
    }
    for (int i=v.size()-1; i>=0; i--)
    {

        if (f[i]==mx)
        {
            for (int j=i; j<i+mx; j++)
            {
                fout<<v[j]<<" ";
            }
            break;
        }
    }
}
