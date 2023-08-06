#include<bits/stdc++.h>
using namespace std;
// pichhese aage sort karte jare
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[],int n){
    //base case - Already sorted
    if(n==0 || n==1)
        return;
    
    bool swapped = false;
    for(int i=0;i<n-1;i++){

        if(arr[i] > arr[i+1]){
        swap(arr[i],arr[i+1]);
        swapped = true;
        }
    }
    if(swapped==true)
        bubbleSort(arr,n-1);
    else
        return;
}

int main() {
    int arr[] = {4,82,23,50,33,0,-9};
    int n = 7;

    bubbleSort(arr,n);
    printArray(arr,n);
return 0;
}