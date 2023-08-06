#include<bits/stdc++.h>
#define nl endl
using namespace std;
void print(int *arr[],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}
int main() {
    // Array allocated on Stack
    int m=3,n=2;
    int *arr[m]; // it is array of pointers on stack memory

    for(int i=0;i<m;i++)
        arr[i]=new int[n]; // we can allocate dynamic memory to all arrays
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = 10;
        }
    }
    
    print(arr,m,n);
return 0;
}