#include<bits/stdc++.h>
using namespace std;
int modExponentiation(int a,int b,int m){
    int res = 1;

    while(b > 0){
        if(b&1){
            //odd power
            res = (1LL * res * a)%m; //adding one power
        }
        a = (1LL * a * a)%m; // squiring a
        b = b>>1; //b = b/2
        }
    return res;
}

int main() {
    cout<<"a^b = ";
    int m = 1e9+10;
    cout<<modExponentiation(10,20,m)<<endl;
return 0;
}