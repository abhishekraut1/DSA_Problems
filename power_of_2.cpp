#include<bits/stdc++.h>
using namespace std;
int powerOf2(int n){
    // base case
    if(n==0)
        return 1;
    // recursive relation
return 2 * powerOf2(n-1);
}
int main() {
    int n; // n = power
    cin>>n;
    cout<<powerOf2(n);
return 0;
}