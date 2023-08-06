#include<iostream>
using namespace std;
int nthFibo(int n){
    int a=0;
    int b=1;
    for(int i=0;i<n-3;i++){
        int nextNo = a+b;
        a=b;
        b=nextNo;
    }
    return b;
}
int main(){
    int n;
    cin>>n;
    int ans = nthFibo(n);
    cout<<ans;
    return 0;
}