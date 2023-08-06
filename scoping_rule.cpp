#include<bits/stdc++.h>
# define nl endl
using namespace std;
int x=10; //global variable
int main() {
    int x=20;
    int a=90;
    {
        int x=30;
        a=100;
        cout<<x<<nl;
    }
    cout<<x<<nl;
    cout<<::x<<nl;// :: scope resolution operator for accessing global var
    cout<<a<<nl;
return 0;
}