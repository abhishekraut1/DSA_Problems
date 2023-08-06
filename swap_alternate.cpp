#include<iostream>
#include<math.h>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
//for both even and odd size array 
void swapArray(int arr[],int size){
for(int i=0;i<size;i+=2){
    if(i+1<size)
      swap(arr[i],arr[i+1]);
}

}
int main(){
    int arr[100] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    swapArray(arr,size);
    printArray(arr,size);
return 0;
}