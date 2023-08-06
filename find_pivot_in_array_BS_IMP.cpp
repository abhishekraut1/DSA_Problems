#include<iostream>
using namespace std;
// Q. Find the index from which the array is rotated
int getPivot(int arr[],int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<end){

        if(arr[mid] >= arr[0]){ // go to right part
        start = mid+1;
        }else{
            end = mid; // go to left part
        }
        mid = start + (end-start)/2;
    }
    // return when (start = end)
    return start; //or end
}
int main() {
    int arr[] = {11,23,30,3,5,6,8}; 
    // Here from 11 to 30 and 3 to 8 these are Monotonic functions (i.e increasinfg or decreasing)
    //  Hence we use Binary Search
    int n=7;
    int ans =  getPivot(arr,n);
    cout<<ans<<endl;
    
return 0;
}