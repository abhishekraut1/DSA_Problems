#include<bits/stdc++.h>
using namespace std;
// TC = theta(n)
// Auxilliary Space = theta(n)
int sumOfDigits(int n){
    if(n==0) return 0;
    return n%10 + sumOfDigits(n/10);
}
int main() {
    int n = 794;
    cout<<sumOfDigits(n);
return 0;
}