#include<bits/stdc++.h>
using namespace std;
// Function Overloading is Compile Time Polymorphism
class Animal{
    public:
    void run(){
        cout<<"running"<<endl;
    }
    void run(string s){
        cout<<s<<" is running"<<endl;
    }
};
int main() {
    Animal obj;
    obj.run();
    obj.run("dog");
return 0;
}