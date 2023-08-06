#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch = 'A'+n-1;
    for(int i=1;i<=n;i++){
        char ch2 = ch;
        for(int j=i;j<2*i;j++){
             cout<<ch2;
             ch2++;
        }
        cout<<endl;
        ch = ch-1;
    }
    return 0;
}