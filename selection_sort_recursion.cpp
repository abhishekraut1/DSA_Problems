#include<iostream>
using namespace std;
// aage se pichhe sort karte jare
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int n,int i){
    //base case
    if(i == n-1)
        return;
    
    int minIndex = i;
    for(int j=i+1;j<n;j++){
        if(arr[minIndex] > arr[j])
            minIndex = j;
    }
    swap(arr[i],arr[minIndex]);
    //RECURSIVE RELATION
    selectionSort(arr,n,i+1);
}

int main() {
    int arr[] = {4,82,23,50,33,0,-9};
    int n = 7;
    int a[]={1,2,3,78,70}; //imp example
    selectionSort(arr,n,0);
    printArray(arr,n);

    selectionSort(a,5,0);
    printArray(a,5);
return 0;
}