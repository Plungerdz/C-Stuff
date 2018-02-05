#include <iostream>
#include <fstream>

using namespace std;


ifstream fin("nodiv.in");
ofstream fout("nodiv.out");

//int t;
/*
int fact(int x) {
    if (x==0) return 1;
    return x*fact(x-1);
}
*/
void printArray(int* v, int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}
/*
int* next(int* v, int n) {
    int i=n-1, k=0, res[n];
    while (v[i]==0) i++;
    for (int j=0; j<n; j++) if (v[i]==1) k++;

}
*/

int fexp(int x, int n)
{
    //if n < 0  then return exp_by_squaring(1 / x, -n);
    if (n == 0) return  1;
    else if (n == 1)  return  x ;
    else if (n % 2 == 0)  return fexp(x * x,  n / 2);
    else if (n % 2 == 1) return x * fexp(x * x, (n - 1) / 2);
}
int n, m, otk;
int main()
{
    fin>>t;
    for (int l=0; l<t; l++)
    {
        fin>>n;
        bool br=false;
        int aux[m], v[m];
        for (int i=0; i<m; i++) aux[i]=0;
        for (int i=0; i<m*m; i++)
        {
            for (int j=0; j<(m*m-i); j++)
            {
                for (int k=0; m*m<n; k++)
                {
                    v[k]=aux[k];
                }
                v[j]=1;
                /*
                for (int k=0; k<n; k++) {
                    cout<<v[k]<<" ";
                }
                */
                int s=0;
                for (int x=0; x<m; x++) {
                    for (int y=0; y<m; y++) {
                    s+=v[x+y]*pow(2,x)*pow(3,y);
                    }
                }
                if (s==n) {br=true;
                otk=m;
                }
                if (br) break;
                if (j==(n-i-1))
                {
                    for (int k=0; k<m*m; k++)
                    {
                        aux[k]=v[k];
                    }
                }
              if (br) break;
            }
            if (br) break;
        }

    }



}
