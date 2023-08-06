#include<iostream>
#include<vector>
using namespace std;
void printVec(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// Rotate array by 'k' steps
void rotateArray(vector<int> &arr, int k){
    vector<int> temp(arr.size());
    for(int i=0;i<arr.size();i++){
        temp[(i+k)%arr.size()] = arr[i]; //IMP for rotating array
    }
    //copying temp to arr
    arr = temp;
}

int main() {
    vector<int> arr = {1,3,5,7,9};
    int k = 2;
    rotateArray(arr,k);
    printVec(arr);
return 0;
}