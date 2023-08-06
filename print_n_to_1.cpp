#include<bits/stdc++.h>
using namespace std;
// tail recursion
void printNto1(int n){
    if(n==0) return;
    cout<<n<<" ";
    printNto1(n-1);
}
void print1toN(int n,int k){
    if(n==0) return;
    cout<<k<<" ";
    print1toN(n-1,k+1);
}
int main() {
    printNto1(7);
    cout<<endl;
    print1toN(7,1);
return 0;
}