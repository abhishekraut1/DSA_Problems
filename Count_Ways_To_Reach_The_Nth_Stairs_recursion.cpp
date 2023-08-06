#include<bits/stdc++.h>
using namespace std;
int countDistinctWayToClimbStair(long long nStairs){
    //base case
	if(nStairs < 0)
        return 0;
    if(nStairs == 0)
        return 1;
        
    int ans = countDistinctWayToClimbStair(nStairs-1) + countDistinctWayToClimbStair(nStairs-2);
return ans;
}
int main() {
    cout<<countDistinctWayToClimbStair(4);
return 0;
}