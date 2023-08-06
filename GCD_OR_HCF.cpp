#include<bits/stdc++.h>
using namespace std;
// Time Complexity = O(log(max(a,b)))
int gcd(int a,int b){
    if(b==0)
        return a;
    
    return gcd(b,a%b);
}
int main() {
    int a=10;
    int b=15;
    cout<<gcd(a,b)<<endl;

return 0;
}