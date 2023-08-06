#include<bits/stdc++.h>
using namespace std;
// 5^4 = 5^(4/2) * 5^(4/2)
// 5^7 = 5 * 5^(7/2) * 5^(7/2)
int a_to_power_b(int a,int b){
    //base case
    if(b==0)
        return 1;
    
    if(b==1)
        return a;

    // Recursive call
    int ans = a_to_power_b(a,b/2);

    // if b is odd
    if(b&1){
        return a*ans*ans;
    }
    else{ // if b is even
        return ans*ans;
    }
}
int main() {

    int a,b;
    cin>>a>>b;
    int ans = a_to_power_b(a,b);
    cout<<ans;

return 0;
}