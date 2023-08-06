#include<bits/stdc++.h>
#define nl endl
// maintaining sorted and unsorted part in same array
// TC = theta(nlog(n)) (Worst Case)
// SC = O(n)
// It is Stable and NOT In Place algorithm 
// Divide and Conquer Algorithm
using namespace std;
int main() {
    vector<int>arr={8,2,4,89,1,22};
    // mergeSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
return 0;
}