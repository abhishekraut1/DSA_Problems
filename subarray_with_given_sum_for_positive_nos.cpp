#include<bits/stdc++.h>
#define nl endl
using namespace std;
// Array containing Positive Numbers only
// tc=O(n^2)
bool subarraySum(vector<int> arr,int giv){
    bool res=false;
    for(int i=0;i<arr.size();i++){
        int sum=arr[i];
        for(int j=i+1;j<arr.size();j++){
            sum+=arr[j];
            if(sum==giv)
                res=true;
            else if(sum>giv)
                break;
        }
    }
    return res;
}

// tc=O(n)
    bool subarraySum2(vector<int>& nums, int k) {
        int s=0;
        int sum=0;
        
        for(int e=0;e<nums.size();e++){
            sum+=nums[e];
            while(sum>k){
                sum-=nums[s];
                s++;
            }
            if(sum==k)
                return true;
        }

        return false;
        
    }
int main() {
    // vector<int>arr = {1,4,0,0,3,10,5};
    vector<int>arr = {4,8,12,5};
    cout<<subarraySum(arr,17)<<nl;
    cout<<subarraySum2(arr,17)<<nl;
return 0;
}