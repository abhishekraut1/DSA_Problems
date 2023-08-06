#include<bits/stdc++.h>
#define nl endl
using namespace std;
class Base{
    private:
        int x;

    protected:
        int y;

    public:
        int z;
};
class Derived:public Base{
    public:
        void funD(){
            // x=9; not accessible
            y=9;
            z=2;
        }
};
class A{
    Base b;
    void funA(){
        b.z=80;
        // b.x=9; not accessible
        // b.y=8; not accessible
    }
};
int main() {
return 0;
}

//                 private     protected       public
// inside class|      Y             Y             Y         

// inside Derived
// class              N             Y              Y

// On object          N             N              Y    