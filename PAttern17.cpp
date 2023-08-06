#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=n;
    int cnt2=n;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=cnt;j++){
        cout<<j;
        }
        cnt--;

        for(int j2=1;j2<=i-1;j2++){
        cout<<"*";
        }

        for(int j3=i-1;j3>=1;j3--){
        cout<<"*";
        }

        for(int j4=cnt2;j4>=1;j4--){
        cout<<j4;
        }
        cnt2--;
        cout<<endl;
     }
    return 0;
}