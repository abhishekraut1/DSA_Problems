#include<bits/stdc++.h>
using namespace std;
// You are given a number N. Find the total number of setbits in the numbers from 1 to N. 

    long long countBits(long long N) {
        vector<int>dp(N+1,0);
        long long ct = 0;
        for(int i=1;i<=N;i++){
            if(i&1){
                dp[i] = dp[i/2]+1;
            }else{
                dp[i] = dp[i/2];
            }
            
            ct += dp[i];
        }
        
        return ct;
    }
int main() {
    cout<<countBits(890)<<endl;
return 0;
}