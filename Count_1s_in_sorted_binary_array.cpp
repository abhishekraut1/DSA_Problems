#include<bits/stdc++.h>
#define nl endl
using namespace std;

int solve(int arr[],int n){
    int s=0,e=n-1;

    while(s<=e){
    int m=e+(s-e)/2;

    if(arr[m]==0)
        s=m+1;
    else{
        if(m==0 || (arr[m-1]!=arr[m]))
            return n-m;
        else
            e=m-1;
    }

    }
    return 0;
}

int main() {
    int arr[] = {0,0,0,1,1,1};
    cout<<solve(arr,6)<<nl;
return 0;
}