#include<bits/stdc++.h>
#define nl endl
using namespace std;

int firstOcc(int arr[],int n,int x){
    int s=0,e=n-1;

    while(s<=e){
    int m=e+(s-e)/2;
    
    if(x<arr[m])
        e=m-1;
    else if(x>arr[m])
        s=m+1;
    else {
        if(m==0 || arr[m]!=arr[m-1])
            return m;
        else 
            e=m-1;
    }

    }
    return -1;
}

int lastOcc(int arr[],int n,int x){
    int s=0,e=n-1;

    while(s<=e){
    int m=e+(s-e)/2;

    if(x<arr[m])
        e=m-1;
    else if(x>arr[m])
        s=m+1;
    else {
        if(arr[m]!=arr[m+1] || m==(n-1)){
            return m;
        }
        else 
            s=m+1;
    }

    }
    return -1;
}

int totalOcc(int arr[],int n,int x){
    int first = firstOcc(arr,n,x);
    if(first==-1) return 0;
    else 
        return (lastOcc(arr,n,x) - first +1);
}

int main() {
    int arr[] = {5,10,10,10,20,20};
    cout<<totalOcc(arr,6,10)<<nl;
return 0;
}