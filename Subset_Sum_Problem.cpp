#include<bits/stdc++.h>
using namespace std;
// Given an array of non-negative integers, and a value sum, determine if there is a
//  subset of the given set with sum equal to given sum. 

// using recursion
void solve(vector<int>&arr, int &sum,int i,int s,bool &ans){
        if(i==arr.size()){
            if(sum==s)
                ans=true;
            return;
        }
        solve(arr,sum,i+1,s,ans);
        
        solve(arr,sum,i+1,s+arr[i],ans);
        
    } 
    bool isSubsetSum(vector<int>arr, int sum){
        int s=0;
        bool ans=false;
        solve(arr,sum,0,s,ans);
        
        return ans;
    }
int main() {
    vector<int>arr = {3, 34, 4, 12, 5, 2};
    int sum = 9;
    cout<<isSubsetSum(arr,sum);
return 0;
}