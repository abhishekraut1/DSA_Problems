#include<iostream>
using namespace std;
int firstOccurence(int arr[],int size,int key){
    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(key==arr[mid]){
            ans = mid;
            end = mid-1; //going to left side
        }
        else if(key<arr[mid]){ //'else if' is important
            end = mid-1;
        }else if(key>arr[mid]){
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
return ans;    
}

int lastOccurence(int arr[],int size,int key){
    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(key==arr[mid]){
            ans = mid;
            start = mid+1; //going to right side
        }
        else if(key<arr[mid]){
            end = mid-1;
        }else if(key>arr[mid]){
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
return ans;    
}
int main() {
    int arr[6] = {8,4,29,29,99,200};
    int fistIndex = firstOccurence(arr,6,29);
    cout<<"first index of 29 is "<<fistIndex<<endl;

    int lastIndex = lastOccurence(arr,6,29);
    cout<<"last index of 29 is "<<lastIndex<<endl;
return 0;
}