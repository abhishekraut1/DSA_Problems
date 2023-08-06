#include<bits/stdc++.h>
using namespace std;
// Time Comlexity = (n*log(log(n)))
// Auxilliary space = Θ(√n)
// To print prime nos upto 'n'
 void sieve(int n){
	if(n <= 1)
		return;

	bool isPrime[n+1];

	// fill(isPrime, isPrime + n+1, true);
    memset(isPrime,true,n+1);

	for(int i=2; i*i <= n; i++){
		if(isPrime[i]){
			for(int j = i*i; j <= n; j = j+i){
            //making multiples not prime
				isPrime[j] = false;
			}
		}
	}

	for(int i = 2; i<=n; i++){
		if(isPrime[i])
			cout<<i<<" ";
	}
}
int main(){
    
    int n = 18;

	sieve(n);
}