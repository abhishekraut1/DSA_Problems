#include<bits/stdc++.h>
using namespace std;
class Animal{
   
};
class Human : public Animal{ 
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Male : public Human{
    public:
    void gender(){
        cout<<"Male"<<endl;
    }
};
int main() {
    Male m;
    m.speak();
    m.gender();
return 0;
}