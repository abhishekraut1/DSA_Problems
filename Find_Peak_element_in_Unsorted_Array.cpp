#include<bits/stdc++.h>
#define nl endl
using namespace std;
// TC = O(log(n))
int findPeak(int arr[],int n){
    int s=0,e=n-1;

    while(s<=e){
        int mid = s + (e-s)/2;

        if((mid==0 || arr[mid-1] <= arr[mid]) && (mid==n-1 || arr[mid+1] <= arr[mid]))
            return mid;
        else if(mid>0 && arr[mid-1]>arr[mid])
            e=mid-1;
        else if(arr[mid+1]>arr[mid])
            s=mid+1;
    }

    return -1;
}
int main() {
    int arr[] = {10, 10, 15, 2, 23, 90, 67};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findPeak(arr,n);
return 0;
}