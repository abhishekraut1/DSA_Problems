#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int size){
    int res=0;
    for(int i=0;i<size;i++)
    res = res^arr[i];

    return res;
}
int main() {
    int size = 7;
    int arr[size] = {1,1,2,6,6,90,2};

    cout<<solve(arr,size)<<endl;
return 0;
}