#include<bits/stdc++.h>
using namespace std;
class Hero{
    // properties / data members (by default data members are private)
    public: // can access anywhere
    int health;
    private: // cannot access anywhere
    char level;
    // functions / behaviour
    void print(){
        cout<<level<<endl;
    }
};
int main() {
    //size of empty class is 1 byte
    Hero ramesh;
    ramesh.health = 100;
    // ramesh.level = 'A'; --> not allowed because level is private

    cout<<"health : "<<ramesh.health<<endl;
    // ramesh.print(); --> not allowed because level is private
return 0;
}