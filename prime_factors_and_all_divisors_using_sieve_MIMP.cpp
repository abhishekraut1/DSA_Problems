#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+10;

// Prime factors of an number using SIEVE Algo
// Nlog(log(N))
vector<bool>isPrime(N,true);
vector<int>lpf(N,0),hpf(1e6+7,0);
void lpfhpf(){
    isPrime[0] = isPrime[1] = false;
    
    for(int i=2;i<=N;i++){
        if(isPrime[i] == true){
            lpf[i] = hpf[i] = i;
            for(int j=2*i;j<=N;j+=i){
                isPrime[j] = false;
                hpf[j] = i;
                if(lpf[j] == 0){
                    lpf[j] = i;
                }
            }
        }
    }
}

vector<int> primeFactors(int n){
    vector<int>prime_factors;

    while(n>1){
        int prime_factor = hpf[n];
        while(n % prime_factor == 0){
            n /= prime_factor;
            prime_factors.push_back(prime_factor);
        }
    }

    return prime_factors;
}

// All divisors of an number using SIEVE Algo
// Nlog(N)
vector<vector<int>> divisors(N);

void allDivisors(){
    for(int i=2;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            divisors[j].push_back(i);
        }
    }
}


int main() {
    allDivisors();
    for(int x:divisors[780])
    cout<<x<<" ";

    lpfhpf();
    cout<<lpf[13];
return 0;
}