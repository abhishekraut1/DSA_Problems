#include<iostream>
using namespace std;
bool isPrime(int n){
     for(int i=2;i*i<n;i++){ // Time Complexity = O(√n)
        if(n%i==0){
           return false;
        }
    }
    return true;
}
int main(){
    cout<<"Enter the number : ";
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is prime number.";
    }else{
        cout<<n<<" is not prime number.";
    }
    return 0;
}