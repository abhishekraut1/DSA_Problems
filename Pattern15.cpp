#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int cnt=i;
        for(int j=1;j<i;j++){
        cout<<" ";
        }
        for(int j=i;j<=n;j++){
        cout<<cnt;
        cnt++;
        }
        cout<<endl;
    }
    return 0;
}