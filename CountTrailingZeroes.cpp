#include<bits/stdc++.h>
using namespace std;
// count no of zeroes in factorial of n
int countZeroes(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5)
        res = res + n/i;
    
    return res;
}
int main() {
    int n=12;
    cout<<countZeroes(n);
return 0;
}