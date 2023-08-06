#include<bits/stdc++.h>
# define nl endl
using namespace std;
// static variable is same global var but its scope is only for that
// function where it is created
void fun(){
    static int a=10;// it is intialised only once
    a++;
    cout<<a<<nl;

    int b=10;
    b++;
    cout<<b<<nl;
}
int main() {
    fun();
    fun();
    fun();
return 0;
}