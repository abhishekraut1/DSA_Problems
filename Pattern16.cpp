#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
        cout<<" ";
        }
        for(int j2=1;j2<=i;j2++){
        cout<<j2;
        }
        for(int j3=i-1;j3>=1;j3--){
        cout<<j3;
        }
        cout<<endl;
     }
    return 0;
}