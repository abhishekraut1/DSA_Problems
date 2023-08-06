#include<bits/stdc++.h>
# define nl endl
using namespace std;
class Complex{
    private:
        int real;
        int img;
    public:
        Complex(int a=0,int b=0){
            real=a;
            img=b;
        }
        friend ostream& operator<<(ostream &out,Complex &c);// takes ostream as argmument hence friend
};
ostream& operator<<(ostream &out,Complex &c){
    out<<c.real<<"+i"<<c.img;
    return out;
}
int main() {
    Complex c1(12,8);
    cout<<c1<<nl;
    // OR
    operator<<(cout,c1)<<nl;
return 0;
}