#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int size){
    if(size == 0 || size == 1)
        return true;

    if(arr[size-1]<arr[size-2]){
        return false;
    }else{
        return isSorted(arr,size-1);
    }   
}
bool isSorted2(int arr[],int size){
    for(int i=1;i<size;i++){
        if(arr[i]<arr[i-1]) return false;
    }
    return true;
}
int main() {
    int arr[] = {1,7,5,5,5};

    if(isSorted(arr,5))
        cout<<"Array is sorted"<<endl;
    else
        cout<<"Array is not sorted"<<endl;
    if(isSorted2(arr,5))
        cout<<"Array is sorted";
    else
        cout<<"Array is not sorted";

return 0;
}