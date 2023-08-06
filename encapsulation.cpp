#include<bits/stdc++.h>
using namespace std;
class Human{
    private:
    int health = 90;
    string color;

    public:
    void setHealth(int h){
        this->health = h;
    }
    int getHealth(){
        return this->health;
    }
};
int main() {
    Human h;
    // h.health; --> private data members can't access outside class
    // h.color; --> private data members can't access outside class
    h.setHealth(172);
    cout<<h.getHealth()<<endl;
return 0;
}