#include<bits/stdc++.h>
#define nl endl 
using namespace std;
// bubble the largest elements and put them at last position
// TC = O(n^2) (Worst Case)
// TC = O(n) (Best Case)
// It is Stable and In Place algorithm
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
    bool swapped = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]) 
            swap(arr[j],arr[j+1]);
            swapped = true;
        }
    if(swapped==false)
        break;
    }
}
int main() {
    // int arr[] = {3,5,10,20,40};
    int arr[] = {8,2,5,12,77};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
return 0;
}