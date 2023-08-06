#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch;
    for(int i=1;i<=n;i++){
        ch = 'A'+n-1;
        for(int j=i;j<2*i;j++){
             cout<<ch;
             ch = ch-1;
        }
        cout<<endl;
    }
    return 0;
}