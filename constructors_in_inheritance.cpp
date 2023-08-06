#include<bits/stdc++.h>
#define nl endl
using namespace std;
class Base{
    public:
        Base(){
            cout<<"Base"<<nl;
        }
        Base(int x){
            cout<<"Base Param"<<nl;
        }
};
class Derived:public Base{
    public:
        Derived(){
            cout<<"Derived"<<nl;
        }
        Derived(int x){
            cout<<"Derived Param"<<nl;
        }
        Derived(int x,int y):Base(x){
            cout<<"Derived Param"<<nl;
        }
};
int main() {
    Derived d;
    cout<<nl;

    Derived d1(8);
    cout<<nl;

    Derived d2(5,8);
return 0;
}