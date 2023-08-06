#include<bits/stdc++.h>
using namespace std;
//return the location of key 'k'
int binarySearch(int arr[],int s,int e,int k){

    //base case
    //element not found
    if(s>e)  
        return  -1;

    int mid = s+(e-s)/2;

    //element found
    if(arr[mid] == k)
        return mid;
    
    if(arr[mid] > k)
        return binarySearch(arr,s,mid-1,k);
    else
        return binarySearch(arr,mid+1,e,k);
}
int main() {
    int arr[] = {1,4,8,11,18};
    int size = 5;
    int s = 0;
    int e = size-1;
    cout<<binarySearch(arr,s,e,18);
return 0;
}
// Time = O(log(n))