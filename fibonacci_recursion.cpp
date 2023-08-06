#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    //base cases
    if(n==0 && n==1)
        return n;
    
    int ans = fib(n-1)+fib(n-2);
    
return ans;
}
int main() {
    int n;
    cin>>n;// counting from 0th index
    cout<<fib(n)<<endl;
return 0;
}
// Time Complexity = O(2^n)