#include<bits/stdc++.h>
using namespace std;
// TC = theta(n)
// Auxilliary Space = theta(n)
int getSum(int n){
    if(n==0) return 0;

    return n+getSum(n-1);
    // return n*(n+1)/2;
}
int main() {
    cout<<getSum(4);
return 0;
}