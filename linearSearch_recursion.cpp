#include<bits/stdc++.h>
using namespace std;
//return the location of key 'k'
int linearSearch(int arr[],int size,int k,int i){
    //base case
    if(i == size)
        return -1; // return false;
    
    if(arr[i] == k)
        return i; // return true;
    
return linearSearch(arr,size,k,i+1);
}
int main() {
    int arr[] = {9,1,4,8,5};
    cout<<linearSearch(arr,5,4,0);
return 0;
}