#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    int n;
    cin>>n;
    int col=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=col;j++){
        cout<<"*";
        }
        cout<<endl;
        col--;
    }
    return 0;
}