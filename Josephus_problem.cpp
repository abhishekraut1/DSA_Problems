#include<bits/stdc++.h>
using namespace std;

// for 1 based
int josephus(int n, int k){
       return jos(n,k)+1;
}

// for 0 based
int jos(int n,int k){
    if(n==1) return 0;
    else
        return (jos(n-1,k)+k)%n;
}
int main() {
    int n,k;
    cin>>n>>k;
    cout<<jos(n,k);
return 0;
}