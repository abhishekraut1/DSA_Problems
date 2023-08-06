#include<bits/stdc++.h>
#define nl endl
using namespace std;

    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ct=0,res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ct=0;
            }else{
                ct++;
                res = max(res,ct);
            }
        }
        return res;
    }
    
int main() {
    vector<int>nums = {1,1,0,1,1,1};
    cout<<findMaxConsecutiveOnes(nums)<<endl;
return 0;
}