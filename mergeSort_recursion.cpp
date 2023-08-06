#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int *arr, int s, int e) {

    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;
    // dynamic arrays declaration
    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] <= second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }    

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return;
    }
    
    int mid = s + (e-s)/2;

    //left part sort karna h 
    mergeSort(arr, s, mid);
 
    //right part sort karna h 
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);

}

int main() {

    int arr[] = { 12, 11, 13, 5, 10, 7 };
    int n = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, n-1);
    printArray(arr,n);

    return 0;
}
//What to do:
// sort left part then sort right part and then merge both

// Time complexity:
// worst case complexity : O(n*log(n))
// best case complexity : O(n*log(n))
// average case complexity : O(n*log(n))

// Merge sort is not in place sort algorithm.
// Hence, Space complexity: O(n)

// Merge Sort is Stable Algorithm.
