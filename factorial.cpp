#include<bits/stdc++.h>
using namespace std;
int fact1(int n){
    int res = 1;
    for(int i=2;i<=n;i++){
        res *= i;
    }
        return res;
    }
int fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int main() {
    int n=5;
    cout<<fact1(n)<<endl;
    cout<<fact(n)<<endl;
return 0;
}