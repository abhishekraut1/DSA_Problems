#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
             cout<<ch;
             ch = ch+1;
        }
        ch = 'A'+i;
        cout<<endl;
    }
    return 0;
}