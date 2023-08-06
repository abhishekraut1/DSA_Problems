#include<bits/stdc++.h>
using namespace std;
int binaryToGrey(int n){
    return (n & (n>>1));
}

int binaryConverter(int n){
    int res = n;
    while (n > 0) 
    {
        n >>= 1;
        res ^= n;
    }
    return res;
}

int main() {
    int n=max(8,0);;
    cout<<binaryToGrey(n)<<endl;
    cout<<binaryConverter(n)<<endl;
return 0;
}