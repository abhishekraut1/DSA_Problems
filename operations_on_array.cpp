// operations on array insertion deletion
#include<bits/stdc++.h>
#define nl endl
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void insertArray(int arr[],int n,int x,int pos,int cap){
    if(n==cap)
        return;

    int i;
    for(i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=x;
}
void deleteArray(int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(x==arr[i]){
            while(i<n){
                arr[i]=arr[i+1];
                i++;
            }
        }
    }
}
int main() {
    int arr[10]={1,5,3,1,2,8};
    insertArray(arr,6,800,4,sizeof(arr)/sizeof(arr[0]));
    print(arr,7);

    int arr2[10]={1,5,3,1,2,8};
    deleteArray(arr2,sizeof(arr)/sizeof(arr[0]),3);
    print(arr2,5);
return 0;
}