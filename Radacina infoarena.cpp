#include <iostream>
#include <cmath>

using namespace std;

class Dual {
    float real;
    float dual;

    Dual(float r_) {
        real=r_;
        dual=0;
    }

    Dual(float r_ ,float d_) {
        real=r_;
        dual=d_;
    }

    Dual fknew(float x) {
        Dual res(x);
        return res;
    }

    Dual fknew(float x, float y) {
        Dual res(x,y);
        return res;
    }
    Dual operator + (Dual x) {
        Dual res = fknew(0,0);
        res.real = this->real + x.real;
        res.dual = this->dual + x.dual;
    }

    Dual operator - (Dual x) {
        Dual res = fknew(0);
        res.real = this->real - x.real;
        res.dual = this->dual - x.dual;
    }

    Dual operator * (Dual x) {
        Dual res = fknew(0);
        res.real = this->real * x.real;
        res.dual = this->real * x.dual + this->dual * x.real;
    }

    /*
    Dual operator / (Dual x) {
        return this * fknew(1/x.real,1/x.dual);
    }
    */

};

Dual dpow(float base, float exp) {
  return Dual::fknew(pow(base,exp),exp*pow(base,exp-1));
}

int main()
{
    Dual a = new Dual(1,2);
    Dual b = new Dual(1,2);
    Dual c = a + b;
    cout<<c.real<<endl;
    cout<<c.dual<<endl<<endl;
    c = a - b;
    cout<<c.real<<endl;
    cout<<c.dual<<endl<<endl;
    c = a * b;
    cout<<c.real<<endl;
    cout<<c.dual<<endl<<endl;
    /*
    c = a / b;
    cout<<c.real<<endl;
    cout<<c.dual<<endl<<endl;
    */
    return 0;
}
