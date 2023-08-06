#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<2*i;j++){
             cout<<ch;
             ch = ch+1;
        }
        cout<<endl;
    }
    return 0;
}