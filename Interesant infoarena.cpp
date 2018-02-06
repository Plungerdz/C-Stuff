#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

ifstream fin("interesant.in");
ofstream fout("interesant.out");

bool first=true;
int p, n, k=0; vector<string> sf;
unsigned int mx=0;
string mxs, mem;


bool cont(string a, string b)
{
    unsigned int n=a.size(), m=b.size();
    if (m>n)
    {
        return false;
    }

    for (int i=0; i<=n-m; i+=m)
    {
        if ((a.substr(i,m))==b) return true;
    }
    return false;
}

int main()
{
    fin>>p>>n;
    string s[n];
    //cout<<p;
    for (int i=0; i<n; i++)
    {
        fin>>s[i];
        if (mx<s[i].size())
        {
            mx=s[i].size();
            if (s[i]>mxs || first)
            {
                mxs=s[i];
                first=false;
            }
        }
    }

    if (p==1)
    {
        fout<<mxs;
    }
    else
    {
        for (int i=0; i<n; i++)
        {
            bool co=false;
            for (int j=0; j<n; j++)
            {
                if (j==i) continue;
                if (cont(s[i],s[j])) {
                    co=true;
                    mem=s[j];
                    break;
                }
            }

            if (!co) {
                k++;
                sf.push_back(mem);
            }
        }
        fout<<k<<endl;
        for (int i=0; i<sf.size(); i++) fout<<sf[i]<<" ";
    }

}
