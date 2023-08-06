#include<bits/stdc++.h>
#define nl endl
using namespace std;
void moveZero(int arr[],int n){
    int ct=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[ct]);
            ct++;
        }
    }
    for(int m=0;m<n;m++)
    cout<<arr[m]<<" ";
}
int main() {
    int arr[8]={3,5,0,30,1,0,4,0};
    moveZero(arr,8);
return 0;
}