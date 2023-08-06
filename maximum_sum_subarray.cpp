#include<bits/stdc++.h>
#define nl endl
using namespace std;
    // tc = theta(n^2)
    int maxSumSubarray(vector<int>&arr){
        int res=arr[0];
        for(int i=0;i<arr.size();i++){
            int sum=0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                res=max(res,sum);
            }
        }
        return res;
    }

    // tc = theta(n)
    // Kadane's Algorithm
    int maxSumSubarray2(vector<int>&arr){
        int max_ending_here=0;
        int max_so_far=0;
        int s=0,e=0;
        for(int i=0;i<arr.size();i++){
            // either extend the previous max_ending_here or start new one
            max_ending_here = max_ending_here+arr[i];

            if(max_so_far < max_ending_here){
                max_so_far = max_ending_here;
                e=i;
            }
           
           if(max_ending_here < 0){
                max_ending_here = 0;
                s = i+1;
           }
        }
        cout<<s<<" "<<e<<endl;
    return max_so_far;
    }
int main() {
    vector<int>arr = { -2, -3, 4, -1, -2, 1, 5, -3 };
    // cout<<maxSumSubarray(arr)<<nl;
    cout<<maxSumSubarray2(arr)<<nl;

return 0;
}