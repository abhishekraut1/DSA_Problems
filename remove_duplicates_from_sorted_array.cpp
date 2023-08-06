#include<bits/stdc++.h>
#define nl endl
using namespace std;
int remove(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[res-1]!=arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return res;
}
int main() {
    int arr[6]={10,10,20,20,30,30};
    cout<<remove(arr,6);
return 0;
}