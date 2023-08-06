#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int sum1=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) sum1 += i;
    }
    return sum1;
}
int main() {
    cout<<"Enter n: ";
    int n;
    cin>>n;
    int sumOfFactors = sum(n); 
    int doubleNo = 2*n;
    
    if(doubleNo==sumOfFactors)
        cout<<"This is perfect no";
    else
        cout<<"This is not perfect no";
return 0;
}