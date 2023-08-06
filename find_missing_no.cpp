#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res = res^arr[i];
    }

    for(int i=1;i<=n+1;i++){
        res = res^i;
    }
    return res;
}
int main() {
    int size = 6;
    int arr[size] = {1,4,2,6,3,7};

    cout<<solve(arr,size)<<endl;
return 0;
}