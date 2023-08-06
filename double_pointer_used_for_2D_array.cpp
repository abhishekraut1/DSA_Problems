#include<bits/stdc++.h>
#define nl endl
using namespace std;
int main() {
    int m=3,n=2;
    // Array allocated on Heap
    int **arr; // points to the array of pointers which is dynamic heap memory
    arr = new int* [m]; 

    for(int i=0;i<m;i++)
        arr[i] = new int[n]; // we can allocate dynamic memory to all arrays
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = 10;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }

return 0;
}