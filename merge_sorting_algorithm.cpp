#include<bits/stdc++.h>
#define nl endl
using namespace std;
// TC = theta(n*log(n))
// SC = theta(n)
void merge_(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int left[n1]; int right[n2];
    
    for(int i=0;i<n1;i++)
        left[i]=arr[l+i];

    for(int i=0;i<n2;i++)
        right[i]=arr[mid+1+i];
    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
            k++;
        }else{
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=right[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[],int l,int r){
    if(r>l){
        int mid = l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge_(arr,l,mid,r);
    }
}
int main() {
    int arr[]={3,1,55,2,3,66,34,67};
    int l=0;
    int r=sizeof(arr)/sizeof(arr[0])-1;

    mergeSort(arr,l,r);

    for(int i=0;i<=r;i++)
        cout<<arr[i]<<" ";
return 0;
}