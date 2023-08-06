#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i] <= pivot)
            cnt++;
    }
    // place pivot at right position
    int pivotIndex = s+cnt;
    swap(arr[s],arr[pivotIndex]);

    // left and right wala part sambhal lo:
    // make elements left to pivot: less than it 
    // AND elements right to pivot: greater than it 
    // by swapping
    int i = s,j = e;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] <= arr[pivotIndex]){
            i++;
        }

        while(arr[j] > arr[pivotIndex]){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}

void quickSort(int arr[],int s,int e){
    // base case
    if(s>=e)
        return;
    
    // partition karenge
    int p = partition(arr,s,e); 
    //p is the actual index of arr[s] i.e 1st element after sorting

    // left part sort karo
    quickSort(arr,s,p-1);

    // right part sort karo
    quickSort(arr,p+1,e);    
}
int main() {
    int arr[] = {4,82,23,50,33,0,-9};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,n-1);
    printArray(arr,n);
return 0;
}
//What to do:
// first find partion and then sort left part then sort right part

// Time complexity:
// worst case complexity : O(n^2)
// best case complexity : O(n*log(n))
// average case complexity : O(n*log(n))

// Quick sort is in place sorting algorithm.
// Space complexity: 
// best case: O(log n)
// worst case: O(n)

// Quick Sort is not Stable Algorithm.
