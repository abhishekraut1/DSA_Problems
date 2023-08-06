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
        Complex operator+(Complex x){// Complex add(Complex x){
            Complex temp;
            temp.real=real+x.real;
            temp.imaginary=imaginary+x.imaginary;

            return temp;
        }
        void display(){
            cout<<real<<" + i"<<imaginary<<nl;
        }

};
int main() {
    Complex c1(2,5);
    Complex c2(7,3);
    Complex c3;
    c3 = c1+c2; // c1.add(c2) - here c2 is added to c1
    c3.display();
return 0;
}