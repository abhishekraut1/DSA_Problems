#include<bits/stdc++.h>
#define nl endl
using namespace std;
// tc=O(n^2)
int longest(vector<int> &arr){
    int res=1;
    for(int i=0;i<arr.size();i++){
        int curr=1;
        for(int j=i+1;j<arr.size();j++){
            if((arr[j]%2!=0 && arr[j-1]%2==0) || (arr[j]%2==0 && arr[j-1]%2!=0)){
                curr++;
            }else{
                break;
            }
        }
        res=max(res,curr);
    }
    return res;
}

// tc=theta(n)
int longest2(vector<int>&arr){
    int res=1;
    int curr=1;
    for(int i=1;i<arr.size();i++){
        //extend current subarray
        if((arr[i]%2!=0 && arr[i-1]%2==0) || (arr[i]%2==0 && arr[i-1]%2!=0)){
                curr++;
                res=max(res,curr);
        }else
            curr=1; //start new subarray
    }

    return res;
}
int main() {
    vector<int>arr = {5,10,20,6,3,8};
    cout<<longest(arr)<<nl;
    cout<<longest2(arr)<<nl;
return 0;
}