#include<bits/stdc++.h>
#define nl endl
using namespace std;
    // TC=O(n) --> Sliding Window Technique
    // FOR NON-NEGATIVE ELEMENTS CONTAINING ARRAY ***************

    // // TC = O(n)
    // Here K is given
    bool isSum(vector<int>& arr,int k,int givSum){
        int n=arr.size();
        int curr_sum=0;
        for(int i=0;i<k;i++)
            curr_sum += arr[i];
        if(curr_sum==givSum) return true;
        for(int i=k;i<n;i++){
            curr_sum += (arr[i]-arr[i-k]);
            if(curr_sum==givSum) 
            return true;
        }
        return false;
    }

    // TC = O(n)
    // Here K is not given
    bool isSum2(vector<int>& arr,int givSum){
        int s=0,curr_sum=0;
        for(int e=0;e<arr.size();e++){
            curr_sum += arr[e];
            if(curr_sum > givSum){
                curr_sum -= arr[s];
                s++;
            }
            if(curr_sum == givSum){
                cout<<"s = "<<s<<", e = "<<e<<nl;
                return true;
            }
        }
        return false;
    }
    int main() {
    vector<int>arr = {5,10,20,6,3,8};
    cout<<isSum(arr,2,30)<<nl;
    cout<<isSum2(arr,36)<<nl;
    vector<int>a = {4,8,12,5};
    cout<<isSum2(a,17)<<nl;
return 0;
}