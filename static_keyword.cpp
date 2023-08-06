#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    static int health;

    static int func(){ // static function can access only static data members
        return health;
    }
};

int Hero::health = 89; // health is same for all objects
int main() {
    // calling staic variable without creating object
    cout<<"Health: "<< Hero::health <<endl;
    Hero h1;
    cout<<"Health: "<< h1.health <<endl;

    cout<< Hero::func() <<endl;
    
return 0;
}