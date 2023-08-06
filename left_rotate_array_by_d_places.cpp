#include<bits/stdc++.h>
#define nl endl
using namespace std;
//tc=theta(n)
//as=theta(d)
void rotateByD(int arr[],int n,int d){
    int temp[d];
    for(int i=0;i<d;i++)
        temp[i]=arr[i];

    for(int i=d;i<n;i++)
        arr[i-d]=arr[i];

    for(int i=0;i<d;i++)
        arr[n-d+i]=temp[i];

    for(int m=0;m<n;m++)
    cout<<arr[m]<<" ";
    
}

//tc=theta(n)
//as=theta(1)
void reverse1(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void rotateByD2(int arr[],int n,int d){
    reverse1(arr,0,d-1);
    reverse1(arr,d,n-1);
    reverse1(arr,0,n-1);
    for(int m=0;m<n;m++)
    cout<<arr[m]<<" ";
}
int main() {
    int arr[8]={3,5,0,30,1,0,4,0};
    rotateByD(arr,8,3);
    cout<<endl;

    int arr2[8]={3,5,0,30,1,0,4,0};
    rotateByD2(arr2,8,3);
return 0;
}