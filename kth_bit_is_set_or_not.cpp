#include<bits/stdc++.h>
using namespace std;
bool checkKthBit(int n,int k){
    // n = n>>(k-1);  
    return (n&1);
}
int main() {
    int n=5;
    int k=1;
    if(checkKthBit(n,k))
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}