#include<iostream>
using namespace std;
int main(){
    char ch;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<2*i;j++){
             cout<<ch;
             ch = ch+1;
        }
        cout<<endl;
        ch = 'A'+i;
    }
    return 0;
}