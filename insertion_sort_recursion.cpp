#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[],int n,int i){
    // base case
    if(i==n)
        return;

    int temp = arr[i];
    int j = i-1;
    for(;j>=0;j--){
        if(arr[j]>temp)
        //shifting
            arr[j+1] = arr[j];
        else
            break;
    }
    arr[j+1] = temp;

    insertionSort(arr,n,i+1);
}

int main() {
    int arr[] = {4,82,23,50,33,0,-9};
    int n = 7;

    insertionSort(arr,n,1);
    printArray(arr,n);
return 0;
}