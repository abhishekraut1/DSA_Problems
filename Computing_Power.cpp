#include<bits/stdc++.h>
using namespace std;
// Time Complexity = O(log(n))
int power(int x,int n){
    if(n==0) return 1;
    int temp = power(x,n/2);
    temp = temp*temp;
    if(n%2==0)
        return temp;
    else
        return temp*x;
}

// Time Complexity = O(log(n))
int power2(int x,int n){
    if(n==0) return 1;
    int res=1;
    while(n>0){
        if(n&1){ // if odd
            res = res*x;
        }
        x = x*x;
        n = n>>1; // n = n/2;
    }
    return res;
}

int main() {
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<endl;
    cout<<power2(x,n)<<endl;
return 0;
}