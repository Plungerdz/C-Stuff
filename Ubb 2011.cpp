#include <iostream>
#include <vector>

using namespace std;

bool epal(int x) {
    if (x==0) return true;
    int c=x%10, aux=x;
    while (aux>9) {
        aux/=10;
    }
    return (c==aux) && epal(x%aux/10);
}
int main()
{
    vector<int> x;
    bool vid=false;
    int temp;
    while (1) {
        cin>>temp;
        if (temp==0) break;
        x.push_back(temp);
    }
    for (int i=0; i<x.size(); i++) {
        for (int j=0; j<x.size(); j++) {
            if (x[i]>x[j]) swap(x[i],x[j]);
        }
    }
    for (int i=0; i<x.size()-1; i++) {
        if (x[i]==x[i+1]) x.erase(x.begin()+i);
    }

    for (int i=0; i<x.size(); i++) {
        if (epal(x[i])) {cout<<x[i]<<" "; vid=true;}
    }
    if (!vid) cout<<"Sirul Y e vid";
    return 0;
}
