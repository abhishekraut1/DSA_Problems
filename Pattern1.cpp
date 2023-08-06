#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<2*i;j++){
             cout<<j;
        }
        cout<<endl;
    }
    return 0;
}