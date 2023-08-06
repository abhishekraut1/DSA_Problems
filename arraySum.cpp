#include<bits/stdc++.h>
using namespace std;
int arraySum(int arr[],int size){
    if(size == 0)
        return 0;

    int sum = arr[size-1] + arraySum(arr,size-1);
return sum;
}
int main() {
    int arr[] = {5,1,4,8,5};
    cout<<arraySum(arr,5);
return 0;
}