#include<bits/stdc++.h>
using namespace std;
int getSum(int *arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int main() {
    int n;
    cin>>n;
    //variable size array
    int* arr = new int[n];
    //taking input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans = getSum(arr,n);
    cout<<"ans = "<<ans;

    //case 1
    while(true) {
        int i = 5;
    }
    
    //case 2
    while(true) {
        int* ptr = new int;
    }
    delete[] arr;
return 0;
}