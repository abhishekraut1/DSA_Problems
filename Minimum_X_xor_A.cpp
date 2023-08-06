#include<bits/stdc++.h>
using namespace std;
int setBits(int n){
    int ct=0;
    while(n){
        ct += n&1;
        n>>=1;
    }
    return ct;
}
int min(int a,int b){
    int setB = setBits(b);
    int x=0;
        for(int i=30;i>=0 && setB>0;i--){
            if((a>>i)&(1)!=0){
                x^=(1<<i);
                setB--;
            }
        }
        for(int i=0;i<=30 && setB>0;i++){
            if(((x>>i)&1)==0){
                x^=(1<<i);
                setB--;
            }
        }
    return x;
}
int main() {
    int a;
    int b;
    cin>>a>>b;
    cout<<min(a,b);
return 0;
}