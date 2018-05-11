// Example program
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

typedef unsigned long long ull;

bool comp(ull a, ull b) {
    ull aa=1, ab=1;
    while (a%3==0) {a/=3; aa*=3;}
    while (b%3==0) {b/=3; ab*=3;}
    if (a<b) return a<b;
    return aa>ab;
}

int n;
int main()
{
  cin>>n; ull v[n];
  for (int i=0; i<n; i++) {
      cin>>v[i];  
    }
    sort(v,v+n,comp);
    for (int i=0; i<n; i++) {
        cout<<v[i]<<" ";    
    }
}
