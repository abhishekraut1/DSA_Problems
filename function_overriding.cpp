#include<bits/stdc++.h>
using namespace std;
// Function Overriding is Run Time Polymorphism
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};
int main() {
    Animal a;
    a.speak();
    Dog d;
    d.speak();
return 0;
}