#include<iostream>
using namespace std;
//no. of set bits = no. of 1 
int totalSetBits(int n){
    int count=0;
    while(n!=0){
        if(n&1==1){
            count++;
        }
        n = n>>1;
    }
    return count;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans = totalSetBits(a);
    cout<<ans;
    return 0;
}