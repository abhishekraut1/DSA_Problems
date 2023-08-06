#include<iostream>
using namespace std;

// For increasing order
int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size -1;
    //smart step to avoid overflow of max integer value
    int mid = start + (end-start)/2; // (start+end)/2;
    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        if(key<arr[mid]){
            end = mid-1;
        }else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
return -1;    
}

// For decreasing order
int binarySearch2(int arr[],int size,int key){
    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        if(key<arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
return -1;    
}
int main() {
    int incr[6] = {8,4,29,99,136,200};
    int decre[7] = {170,111,97,71,55,40,10};
    int incrIndex = binarySearch(incr,6,99);
    cout<<incrIndex<<endl;

    int decreIndex = binarySearch2(decre,7,130);
    cout<<decreIndex<<endl;
return 0;
}
// Time complexity:
// worst case = O(log(n))
// best case = O(1)
// average case = O(log(n))