#include<bits/stdc++.h>
#define nl endl
using namespace std;
// maintaining sorted and unsorted part in same array
// TC = theta(n^2) (Worst Case)
// TC = theta(n) (Best Case)
// It is Stable and In Place algorithm 

void insertionSort(vector<int>& arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main() {
    vector<int>arr={8,2,4,89,1,22};
    insertionSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
return 0;
}