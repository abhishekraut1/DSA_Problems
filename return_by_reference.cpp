#include<bits/stdc++.h>
# define nl endl
using namespace std;
int &fun(int &x){
    cout<<x<<nl;
    return x;
}
int main() {
    int a=20;
    fun(a)=78;
    cout<<a<<nl;
return 0;
}