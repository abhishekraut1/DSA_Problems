#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    int n;
    cin>>n;
    int cnt=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
             if(j>=cnt){
                 cout<<"*";
             }else{
                 cout<<" ";
             }
        }
        cnt--;
        cout<<endl;
    }
    return 0;
} 