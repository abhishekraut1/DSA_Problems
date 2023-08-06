#include<bits/stdc++.h>
#define nl endl
using namespace std;
// Prefix Sum
// TC = O(n)
// SC = O(n)
int equilibriumPoint(int arr[],int n){
    int pf[n];
    pf[0]=arr[0];
    for(int i=1;i<n;i++){
        pf[i] = pf[i-1]+arr[i];
    }
    if(pf[n-1]-pf[0] == 0) return 0;
    for(int i=1;i<n;i++){
        if(pf[i-1] == pf[n-1]-pf[i])
        return i;
    }
    return -1;
}

// TC = O(n)
// SC = O(1) // Efficient
int equilibriumPoint2(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int l_sum=0;
    for(int i=0;i<n;i++){
        if(l_sum == sum-arr[i])
            return i;
        l_sum += arr[i];
        sum -= arr[i];
    }
    return -1;
}

int main() {
    int arr[] = {3,4,8,-9,20,6};
    cout<<equilibriumPoint(arr,6)<<nl;
return 0;
}