#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseArray(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start < end){ 

    swap(arr[start],arr[end]);
    // temp = arr[start];
    // arr[start] = arr[end];
    // arr[end] = temp;

    start++;
    end--;
}
}

int main(){
    cout<<"Enter the size of array : ";
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr,n);
    printArray(arr,n);
 return 0;
}   