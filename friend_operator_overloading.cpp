#include<bits/stdc++.h>
# define nl endl
using namespace std;
class Complex{
    private:
        int real;
        int imaginary;
    public:
        Complex(int rl=0,int img=0){
            real=rl;
            imaginary=img;
        }
        friend Complex operator+(Complex x,Complex y);
        void display(){
            cout<<real<<" + i"<<imaginary<<nl;
        }
};
Complex operator+(Complex x,Complex y){
    Complex temp;
    temp.real=x.real+y.real;
    temp.imaginary=x.imaginary+y.imaginary;

    return temp;
}

int main() {
    Complex c1(2,5);
    Complex c2(7,3);
    Complex c3;
    c3 = c1+c2;
    c3.display();
return 0;
}