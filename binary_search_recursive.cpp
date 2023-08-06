#include<bits/stdc++.h>
#define nl endl
using namespace std;

int binarysearch(int arr[], int n, int k,int s,int e) {
        if(s>e) return -1;

        int mid=s+(e-s)/2;

        if(arr[mid]==k) 
            return mid;
        else if(arr[mid]>k)
            return binarysearch(arr,n,k,s,mid-1);
        else 
            return binarysearch(arr,n,k,mid+1,e);
    }

int main() {
    int arr[] = {1, 2, 3, 4, 5,89,222,455};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=222;
    cout<<binarysearch(arr,n,k,0,n-1);
return 0;
}