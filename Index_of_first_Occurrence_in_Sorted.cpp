#include<bits/stdc++.h>
#define nl endl
using namespace std;

int firstOcc(int arr[],int s,int e,int x){
    if(s>e) return -1;
    int m=e+(s-e)/2;
    if(arr[m]>x)
        return firstOcc(arr,s,m-1,x);
    else if(arr[m]<x)
        return firstOcc(arr,m+1,e,x);
    else {
        if(m==0 || arr[m]!=arr[m-1])
            return m;
        else 
            return firstOcc(arr,s,m-1,x);
    }

    return firstOcc(arr,s,e,x);
}

int firstOcc2(int arr[],int n,int x){
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

int main() {
    int arr[] = {5,10,10,15,20,20};
    cout<<firstOcc(arr,0,6,20)<<nl;
return 0;
}