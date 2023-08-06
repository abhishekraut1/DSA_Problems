#include<bits/stdc++.h>
#define nl endl
using namespace std;
void printFreq(int arr[],int n){
    int freq=1;
    int i=1;
    while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<" "<<freq<<endl;
        freq=1;
        i++;
    }
    //for last element
    if(n==1 || arr[n-1]!=arr[n-2])
        cout<<arr[n-1]<<" 1"<<endl;
}
int main() {
    int arr[]={10,10,10,25,30,30,30,40};
    int n=8;
    printFreq(arr,n);
return 0;
}