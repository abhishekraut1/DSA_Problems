#include<bits/stdc++.h>
#define nl endl
using namespace std;
// TC = O(lon3(n))
int ternarySearch(int arr[],int n,int k){
    int l=0,r=n-1;

    while(l<=r){

        int mid1 = l + (r-l)/3;
        int mid2 = r - (r-l)/3;
        cout<<l<<" "<<r<<nl;
        if(arr[mid1]==k)
            return mid1;
        if(arr[mid2]==k)
            return mid2;
        
        if(k<mid1){
            r=mid1-1;
        }else if(k>mid2){
            l=mid2+1;
        }else{
            l=mid1+1;
            r=mid2-1;
        }

    }
    return -1;
}
int main() {
    int arr[] = {0,14,65,78,86,90,96};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<ternarySearch(arr,n,86)<<nl;
return 0;
}