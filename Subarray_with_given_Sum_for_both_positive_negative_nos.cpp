#include<bits/stdc++.h>
#define nl endl
using namespace std;
// For Array containing both Positive and Negative nos.

// print if subarray is present or not.
bool solve1(int arr[],int n,int sum){
    int prefix_sum=0;
    unordered_set<int>h;
    for(int i=0;i<n;i++){
        prefix_sum += arr[i];

        if(prefix_sum == sum){
             return true;
        }

        if(h.find(prefix_sum - sum) != h.end()){
            return true;
        }
    }

    return false;
}

// print the range of subarray having given sum
void solve2(int arr[],int n,int sum){
    int prefix_sum=0;
    unordered_map<int,int>h;
    for(int i=0;i<n;i++){
        prefix_sum += arr[i];

        if(prefix_sum == sum){
            cout<<"0 "<<i<<endl;
            return;
        }
        if(h.find(prefix_sum - sum) != h.end()){
            cout<<h[prefix_sum - sum]+1<<" "<<i<<endl;
            return;
        }
        h[prefix_sum] = i;
    }
}

// print the count of subarrays having given sum.
    //Function to count the number of subarrays which adds to the given sum.
    int solve3(int arr[], int n, int sum)    {
        int prefix_sum = 0;
        unordered_map<int,int>mp;
        int res=0;
        for(int i=0;i<n;i++){
            prefix_sum += arr[i];
            
            if(prefix_sum == sum) res++;
            
            if(mp.find(prefix_sum - sum) != mp.end()){
                res += mp[prefix_sum - sum];
            }
            
            mp[prefix_sum]++;
        }
        
        return res;
    }
int main() {
    int n = 5;
    int arr[] = {10,2,-2,-20,10};
    int sum = -10;

    cout<<"is present "<<solve1(arr,n,sum)<<endl;
    solve2(arr,n,sum);
    cout<<solve3(arr,n,sum)<<endl;
return 0;
}