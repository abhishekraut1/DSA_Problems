#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n){
    int res1=0,res2=0,XOR=0;

    for(int i=0;i<n;i++){
        XOR = XOR^arr[i]; 
    }
    // make sn equal to rightmost set bit
    int sn = XOR & (~(XOR-1));
    
    for(int i=0;i<n;i++){
        if((arr[i] & sn) != 0)
            res1 = res1^arr[i];
        else
            res2 = res2^arr[i];
    }
    cout<<res1<<endl;
    cout<<res2<<endl;
}
int main() {
    int size = 8;
    int arr[size] = {1,1,4,2,6,6,90,2};
    solve(arr,size);
return 0;
}