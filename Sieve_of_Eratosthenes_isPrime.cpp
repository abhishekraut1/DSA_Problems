#include<iostream>
#include<vector>
using namespace std;
// Q. Given an integer n, print prime numbers 
//    that are strictly less than n.

// Time Comlexity = (n*log(log(n)))
 void countPrimes(int n) {
    int cnt = 0;
    vector<bool> isPrime(n+1,true); //if upto n then isPrime(n+1,true)
    isPrime[0] = isPrime[1] = false;
    
    for(int i=2;i*i<isPrime.size();i++){
    
        if(isPrime[i]){
        //making multiples not prime
        for(int j=2*i;j<isPrime.size();j=j+i){
            isPrime[j] = false;
        }
        }  
    }
    
    // print primes till n
    for(int i=0;i<isPrime.size();i++){

        if(isPrime[i]){
        cout<<i<<" ";
        }
    }

 }
int main() {
    countPrimes(38);
return 0;
}