#include<bits/stdc++.h>
using namespace std;
// TC = O(log(n))
bool naive(int n){
    // after dividing a number(n) multiple times by 2
    // at the end if it becomes 1 then the 'n' is power of 2;
    if(n==0) return true;

    while(n!=1){

        if(n%2!=0) return false; // if odd
        n = n/2;
    }
    return true;
}

// TC = Θ(1)
bool efficient(int n){ //*************
    if(n==0) return false;
    return (n & (n-1)) == 0;
}
int main() {
    if(naive(128)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    if(efficient(128)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
return 0;
}