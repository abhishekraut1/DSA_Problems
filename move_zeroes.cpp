#include<iostream>
using namespace std;

void moveZero(int arr[],int size){
    int i=0;
    for(int j=0;j<size;j++){
        if(arr[j]!=0){
        swap(arr[i],arr[j]);
        i++;
        }
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int a1[] = {1,0,0,3,0,5,7,0,9};
    moveZero(a1,9);
    printArray(a1,9);
return 0;
}