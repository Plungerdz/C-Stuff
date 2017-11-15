#include <iostream>
#include <sstream>

using namespace std;

int fexp(int a, int b) {
    if (b==0) return 1;
    if (b==1) return a;
    if (b%2==0) {
        return fexp(a*a,b/2);
    } else {
        return a*fexp(a*a,(b-1)/2);
    }
}
int toi(string s) {
    int res=0, p=1;
    for (int i=s.size()-1; i>=0; i--) {
        res+=(int(s[i])-int('0'))*p;
        p*=10;
    }
    return res;
}
int cf(int x) {
     int nr=0;
     while (x){
        x/=10;
        nr++;
     }
     return nr;
}
int cct1(int a, int b) {
    stringstream res;
    res<<a<<b;
    return toi(res.str());
}
int cct2(int a, int b) {
    b+=a*fexp(10,cf(a));
    return b;
}
int main()
{
    //cout<<toi("1512");
    cout <<cct1(15,12)<<endl;
    cout <<cct2(15,12)<<endl;

}
