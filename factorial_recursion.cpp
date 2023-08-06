#include<bits/stdc++.h>
using namespace std;
int fact1(int n){
    if(n==0 || n==1) return 1;
    return n*fact1(n-1);
}

int fact2(int n,int k){
    if(n==0 || n==1) return k;
    k = k*n;
    fact2(n-1,k);
}
int main() {
    cout<<fact1(5)<<endl;
    cout<<fact2(9,1)<<endl;
return 0;
}