#include<bits/stdc++.h>
using namespace std;
// getter and setter are also used to access private members of
// of class outside the class
class Hero{
    private:
    int health;

    public:
    void setHealth(int h){
        health = h;
    }

    int getHealth(){
        return health;
    }
};
int main() {
    // static object creation
    Hero abhi;
    abhi.setHealth(80);
    cout<<"Health = "<<abhi.getHealth()<<endl;

    // dynamic object creation
    Hero *obj = new Hero;

    (*obj).setHealth(89);
    cout<<"Health = "<<(*obj).getHealth()<<endl;
    // OR
    obj->setHealth(89);
    cout<<"Health = "<<obj->getHealth()<<endl;
return 0;
}