#include<bits/stdc++.h>
#define nl endl
using namespace std;
// if any element occurs more than n/2 times in an array then
// this will majority element
// Print the index of majority element



// MOORE'S VOTING ALGORITHM
    int majorityElement(vector<int>& arr){
        int n=arr.size();
        int res=0;
        int count=1; // count for 0th element
        // find majority element
        for(int i=1;i<n;i++){
            if(arr[res]==arr[i])
                count++;
            else{
                count--;
                if(count==0){
                    res=i;
                    count=1;
                }
            }
        }
        // extra step
        count=0;
        for(int i=0;i<n;i++){
            if(arr[res]==arr[i])
                count++;
        }
        if(count<=n/2)
            return -1;
        
        return res;
    }
int main() {
    vector<int>arr = {10,10,10,6,10,8};
    cout<<majorityElement(arr)<<nl;
return 0;
}