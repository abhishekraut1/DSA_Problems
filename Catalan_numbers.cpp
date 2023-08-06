#include<bits/stdc++.h>
using namespace std;
unsigned long int Catalan(int n){

    // base case
    if(n<=1){
        return 1;
    }
    // catalan(n) is sum of catalan(i)*catalan(n-i-1)
    unsigned long int res = 0;
    for(int i=0;i<=n-1;i++){
        res += Catalan(i) * Catalan(n-i-1);
    }

    return res;
}
int main() {
    for(int i=0;i<10;i++){
        cout<<Catalan(i)<<" ";
    }
return 0;
}