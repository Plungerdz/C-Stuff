#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> v;

//float phi=(sqrt(5)+1)/2;

int fib(int x) {
    int a=1;
    int b=1;
    int c=a+b;
    if (v.size()>=x) return v[x-1];
    if (x==1){
        v.push_back(1);
        return 1;
    }

    if (x==2) {
        v.push_back(1);
        return 2;
    }
    v.push_back(fib(x-1)+fib(x-2));
    return v.back();
}

int main()
{
    v.push_back(0);
    int n; cin>>n; int i=1;
    while (v.back()<=n) {
        fib(i);
        i++;
    }

    while (n>0) {

    }
    return 0;
}
