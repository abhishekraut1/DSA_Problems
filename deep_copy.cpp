#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    int health;
    char level;
    char *name; //char pointer

    Hero(){
        cout<<"simple constructor called"<<endl;
        name = new char[100];
    }
    Hero(Hero &temp){
        cout<<"custom copy constructor called"<<endl;
        char *ch = new char[ strlen(temp.name)+1 ];
        strcpy(ch,temp.name);
        this->name = ch;

        this->health = temp.health;
        this->level = temp.level;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
    void setName(char nm[]){
        strcpy(this->name,nm);
    }
    void print(){
        cout<<"health: "<<this->health<<endl;
        cout<<"level: "<<this->level<<endl;
        cout<<"name: "<<this->name<<endl;
    }
};
int main() {
    Hero h1;
    h1.setHealth(100);
    h1.setLevel('A');
    char a[5] = "Abhi";
    h1.setName(a);
    h1.print();
    cout<<endl;
    // call custom copy constructor
    Hero h2(h1);
    h2.print();
    cout<<endl;

    //NO change in dynamic array name 
    h1.setHealth(90);
    h1.setLevel('B');
    h1.name[0] = 'R';
    h2.print();
    cout<<endl;
return 0;
}