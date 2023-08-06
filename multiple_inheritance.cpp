#include<bits/stdc++.h>
using namespace std;
//  Hierarchical Inheritance :
//           A
//         /  \
//       B     C
//      / \   /  \
//     D   E F    G

// Hybrid Inheritance : If we using multiple types of inheritance in one program
//                      then there is Hybrid Inheritance.
class Animal{
   
};
class Human{ 
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Male : public Animal , public Human{
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