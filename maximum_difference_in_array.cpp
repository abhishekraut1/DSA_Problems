#include<bits/stdc++.h>
#define nl endl
using namespace std;
// tc=O(n^2)
int maxDiff(int arr[],int n){
    int diff=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i]>diff)
                diff=arr[j]-arr[i];
    }
    }
    return diff;
}

// tc=O(n)
int maxDiff2(int arr[],int n){
    int diff=arr[1]-arr[0];
    int minVal=arr[0];
    for(int i=1;i<n;i++){
        diff=max(diff,arr[i]-minVal);
        minVal=min(minVal,arr[i]);
    }
    return diff;
}

int main() {
    int arr[]={7,9,5,0,3,2};
    cout<<maxDiff(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<nl;
    cout<<maxDiff2(arr,sizeof(arr)/sizeof(arr[0]));
return 0;
}