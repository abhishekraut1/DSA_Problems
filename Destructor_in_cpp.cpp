#include<bits/stdc++.h>
using namespace std;
class Hero{
    public:
    //Destructor
    ~Hero() {
        cout<<"this is destructor"<<endl;
    }
};
int main() {
    // statically object creation
    Hero h1; // automatic call of destructor

    // dynamically object creation
    Hero *h2 = new Hero();
    delete h2; // manual call of destructor
return 0;
}