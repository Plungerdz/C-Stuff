#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream fin("cia.in");
ofstream fout("cia.out");

bool cond(int a, int b, int step) {
    if (step<0) return a>b;
    if (step>0) return a<b;
}
vector<int> range(int start, int stop, int step) {
    vector<int> v;

    for (int i=start; cond(i,stop,step); i+=step)
        v.push_back(i);
    return v;
}
vector<int> range(int stop) {
    return range(0,stop,1);
}
/*
vector<vector<int>> yield;
void permutations(iterable, r) {
    // permutations('ABCD', 2) --> AB AC AD BA BC BD CA CB CD DA DB DC
    // permutations(range(3)) --> 012 021 102 120 201 210
    //pool = tuple(iterable)
    int n = iterable.size();
    vector<int> yield;
    if (r > n)
        return
    vector<int> indices = range(n)
    vector<int> indicesr;
    for (int i=0; i<r; i++) {
        indicesr.push_back(indices[i]);
    }
    vector<int> cycles = range(n, n-r, -1)
    for (int &i : indicesr)
        yield.push_back(pool[i]);
    while (n!=0) {
        for (int i=r-1; i>=0; i--) {
            cycles[i] -= 1
            if (cycles[i] == 0) {
                indices[i:] = indices[i+1:] + indices[i:i+1]
                cycles[i] = n - i
                }

            else {
               j = cycles[i]
                swap(indices[i],indices[-j])
                for (int i=0; i<r; i++)
                    yield.push_back(indices[i]);
                break;
            }

        else
            return
        }

    }

}
*/
vector<vector<int>> tip;
namespace aj {
    int x[70000];
    int n, c, nr=0;
    void tipar() {
        vector<int> row;
        vector<int> gol;
        for (int i=1; i<=c; i++) {
            row.push_back(x[i]);
        }
        tip.push_back(row);
        row=gol;
        nr++;
    }
    int valid(int k) {
        for (int i=1; i<k; i++) {
            if (x[i]==x[k]) return 0;
        }
        return 1;
    }
    void bec(int k) {
        if (k==c+1) tipar();
        else for (int i=1; i<=n; i++) {
            x[k]=i;
            if (valid(k)) bec(k+1);
        }
    }
}
void printMat(vector<vector<int>> v) {
    for (int i=0; i<v.size(); i++) {
        for (int j=0; j<v[i].size(); j++) {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
void setList(vector<int>& v) {
    for (int i=0; i<tip.size(); i++) {
        for (int j=0; j<tip[i].size(); j++) {
            tip[i][j] = v[tip[i][j]-1];
        }
    }
}

vector<vector<int>> takeAj(vector<int> a, int k) {
    aj::n=a.size();
    aj::c=k;
    aj::bec(1);
    setList(a);
    return tip;
}
vector<int> atov(int* a, int n) {
    vector<int> res;
    for (int i=0; i<n; i++)
        res.push_back(a[i]);
    return res;
}
int n, t, k, m, xs;

int main()
{
    fin>>n>>t>>k>>m; int a[t], b[t], v[n];
    for (int i=0; i<t; i++) {
        fin>>a[i];
    }
    for (int i=0; i<t; i++) {
        fin>>b[i];
    }
    for (int i=0; i<n; i++) {
        v[i]=(a[i%t] xor b[i/t])%m;
    }
    /*
    vector<int> test = range(20,1,-1);
    cout<<endl;
    for (int i=0; i<test.size(); i++)
        cout<<test[i]<<" ";
    */
    vector<vector<int>> mult = takeAj(atov(v,n),k);
    for (int i=0; i<mult.size(); i++) {
        unsigned long long prod=1;
        for (int j=0; j<mult[i].size(); j++) {
            prod*=mult[i][j];
        }
        if (i==0) xs=prod;
        else xs=xs xor prod;
    }
    fout<<xs;
}
