#include<bits/stdc++.h>
using namespace std;
// TC = Θ(32) or Θ(64)
int count1(int n){
    int cnt=0;
    while(n>0){
        if(n&1) cnt++; // if(n%2!=0) cnt++;
        n >>= 1;       // n=n/2;
    }
    return cnt;
}

// Brian and Kerningham Algorithm:-
// TC = Θ(no. of set bits in a number)
int count2(int n){
    int cnt=0;
    while(n>0){
        n = n&(n-1);
        cnt++;
    }
    return cnt;
}

// Lookup Table:-
// TC = Θ(1)
int count3(int n){
    int cnt=0;
    int table[256];
    table[0]=0;
    for(int i=1;i<=256;i++){
        table[i] = (i&1) + table[i/2];
    }

    // for 32 bit
    int res = table[n & 0xff] + table[(n>>8) & 0xff] 
              + table[(n>>16) & 0xff] + table[(n>>24) & 0xff];

    return res;
}
int main() {
    int n=9;
    cout<<count1(n)<<endl;
    cout<<count2(n)<<endl;
    cout<<count3(n)<<endl;
return 0;
}