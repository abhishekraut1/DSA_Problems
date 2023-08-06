#include<iostream>
using namespace std;
// Q. Find the element in rotated array and print its index.
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

int binarySearch(int arr[],int start ,int end,int target){
    int mid = start + (end-start)/2;
    while(start<=end){
        if(target==arr[mid]){
            return mid;
        }
        if(target<arr[mid]){
            end = mid-1;
        }else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
return -1;    
}
int main() {
    int arr[] = {11,23,30,2,5,6,8}; 
    int target = 30;
    int n=7;
    int pivot =  getPivot(arr,n);

    if(target >= arr[pivot] && target <= arr[n-1]){
        // BS of 2nd line
        cout<<binarySearch(arr,pivot,n-1,target)<<endl;

    }else{
        // BS of 1st line
        cout<<binarySearch(arr,0,pivot-1,target)<<endl;
    }
return 0;
}
// Time Complexity = O(log(n))