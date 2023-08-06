#include<bits/stdc++.h>
using namespace std;
// It is occur when base classes of subclass have functions with same name
class A{
    public:
    void print(){
    cout<<"I am class A"<<endl;
    }
};
class B{
    public:
    void print(){
    cout<<"I am class B"<<endl;
    }
};
class C : public A , public B {
};
int main() {
    C obj;
    obj.A::print(); // ' :: ' --> scope resolution operator
    obj.B::print();
    B b;
    b.print();
return 0;
}