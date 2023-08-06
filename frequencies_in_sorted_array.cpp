#include<bits/stdc++.h>
#define nl endl
using namespace std;
void freq(int arr[],int n){
    int i=0;
    for(;i<n;i++){
        int a=arr[i];
        cout<<a<<" ";
        int ct=0;
        while(arr[i]==a){
            i++;
            ct++;
        }
        i--;
        cout<<ct<<endl;
    }
}
int main() {
    int arr[]={3,3};
    freq(arr,sizeof(arr)/sizeof(arr[0]));
return 0;
}