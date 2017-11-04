#include <iostream>

using namespace std;

string trans(int n, int b) {
    string res="";
    while (n) {
        if (n%b>=10) {
            switch (n%b) {
            case 10: res+="A";
                     break;
            case 11: res+="B";
                     break;
            case 12: res+="C";
                     break;
            case 13: res+="D";
                     break;
            case 14: res+="E";
                     break;
            case 15: res+="F";
                     break;
            case 16: res+="G";
                     break;
            case 17: res+="H";
                     break;
            case 18: res+="I";
                     break;
            case 19: res+="J";
                     break;
            case 20: res+="K";
                     break;
            case 21: res+="L";
                     break;
            case 22: res+="M";
                     break;
            case 23: res+="N";
                     break;
            case 24: res+="O";
                     break;
            case 25: res+="P";
                     break;
            case 26: res+="R";
                     break;
            case 27: res+="S";
                     break;
            case 28: res+="T";
                     break;
            case 29: res+="U";
                     break;
            case 30: res+="V";
                     break;
            case 31: res+="W";
                     break;
            case 32: res+="X";
                     break;
            case 33: res+="Y";
                     break;
            case 34: res+="Z";
                     break;
            default: break;
            }
        } else {
            res+=(""+n%b);
        }
        n/=b;
    }
    return res;
}
string b10(int x) {
    string res="";
    while (x) {
        res+=x%10;
        x/=10;
    }
    return res;
}
int main()
{

    int n; cin>>n;
    int b; cin>>b;
    cout<<trans(n,b);


}
