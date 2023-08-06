#include<bits/stdc++.h>
#define nl endl
using namespace std;
// return maximum sum of k consecutive elements
// TC=O(n^2)
    int maxSum(vector<int>& arr,int k){
        int n=arr.size();
        int max_sum=INT_MIN;
        for(int i=0;i+k-1<n;i++){
            int sum=0;
            for(int j=0;j<k;j++){
                sum+=arr[i+j];
            }
            max_sum=max(sum,max_sum);
        }
        return max_sum;
    }

    // TC=O(n) --> Sliding Window Technique
    int maxSum2(vector<int>& arr,int k){
        int n=arr.size();
        int curr_sum=0;
        for(int i=0;i<k;i++)
            curr_sum += arr[i];
        int max_sum = curr_sum;
        for(int i=k;i<n;i++){
            curr_sum += (arr[i]-arr[i-k]);
            max_sum = max(max_sum,curr_sum);
        }
        return max_sum;
    }
int main() {
    vector<int>arr = {5,10,20,6,3,8};
    cout<<maxSum(arr,2)<<nl;
    cout<<maxSum2(arr,2)<<nl;
return 0;
}