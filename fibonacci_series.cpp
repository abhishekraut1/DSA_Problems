#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    cout<<"0 "<<"1 ";
    for(int i=2;i<n;i++){
        int nextNo = a+b;
        cout<<nextNo<<" ";
        a=b;
        b=nextNo;
    }
return 0;
}
