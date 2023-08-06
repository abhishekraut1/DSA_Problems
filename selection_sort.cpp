#include<bits/stdc++.h>
#define nl endl
using namespace std;
// find the smallest element and put them at first position
// TC = theta(n^2) (Worst Case) (Best Case)
// It is Unstable and In Place algorithm 
// (change the orders of identical elements in an array)
void selectionSort(vector<int> &arr){

    int n=arr.size();
    for(int i=0;i<n;i++){
        int min_idx=0;
        for(int j=i+1;j<n;j++){
            if(arr[min_idx]>arr[j])
                min_idx=j;
        }
        swap(arr[min_idx],arr[i]);
    }

}

int main() {
    vector<int>arr={8,2,4,89,1,22};
    selectionSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
return 0;
}