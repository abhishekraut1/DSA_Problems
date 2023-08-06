#include<bits/stdc++.h>
#define nl endl
using namespace std;
//Naive tc=O(n^2)
void leaders(int arr[],int n){
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=i+1;j<n;j++){
        if(arr[i]<=arr[j])
            flag=false;
    }
    if(flag)cout<<arr[i]<<" ";
    }
}

//effective tc=O(n)
void leaders2(int arr[],int n){
    int curr_leader=arr[n-1];
    cout<<curr_leader<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>curr_leader){
            curr_leader=arr[i];
            cout<<curr_leader<<" ";
    }
}
}
int main() {
    int arr[]={16 ,17 ,4 ,3 ,5 ,2};
    leaders(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<nl;
    leaders2(arr,sizeof(arr)/sizeof(arr[0]));
return 0;
}