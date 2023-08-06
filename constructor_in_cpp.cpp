#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    int health;
    char level;
    char *name;

    // simple constructor
    Hero(){
        cout<<"This is simple constructor"<<endl;
    }

    // parameterised constructor
    Hero(int health=1,char level='A'){
        (*this).health = health; // this stores the address of current object 
        // this keyword is pointer to current object
        this->level = level;
    }
    // custom copy constructor
    Hero(Hero &temp){
        this->health = temp.health;
        this->level = temp.level;
    }
    void print(){
        cout<<"health: "<<this->health<<endl;
        cout<<"level: "<<this->level<<endl;
    }

};
int main() {
    Hero R(90,'A');
    R.print();
    // copying constructor
    Hero S(R);
    S.print();
    S.health = 899;
    R.print();
    S.print();
return 0;
}