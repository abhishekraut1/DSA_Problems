#include<iostream>
using namespace std;
void update1(int n){
    n=66;
}

void update2(int &n){
    n=66;
}
int main() {
    int a=11;
    cout<<a<<endl;

    update1(a); //pass by value 
    cout<<a<<endl;
 
    update2(a); //pass by referance 
    cout<<a<<endl; 

    //array is always passed by referance

    return 0;
}