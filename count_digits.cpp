#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
    int count = 0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}
int countDigits2(int n){
    return floor(log10(n)+1);
}
int main(){
    int n = 469905;
    cout<<countDigits(n)<<endl;
    cout<<countDigits2(n)<<endl;

    return 0;
}