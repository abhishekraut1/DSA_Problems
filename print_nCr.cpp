#include<iostream>
using namespace std;

int factorial(int a){
    int fact = 1;
    for(int i=1;i<=a;i++){
        fact = fact*i;
    }
    return fact;
}

int nCr(int n,int r){
int Nr = factorial(n);
int Dr = factorial(r)*factorial(n-r);

return Nr/Dr;
}

int main(){
int n,r;
cin>>n>>r;
int answer = nCr(n,r);
cout<<answer;
    return 0;
}
