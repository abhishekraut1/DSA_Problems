#include<bits/stdc++.h>
#define nl endl
using namespace std;
// to make last n digits 0 of x
int make0(int n,int x){
    while(n){
        x=x&(x-1);
        n--;
    }
    return x;
}
// to make last n digits 1 of x
int make0(int n,int x){
    while(n){
        x=x|(x+1);
        n--;
    }
    return x;
}
int main() {
    
return 0;
}