#include<bits/stdc++.h>
using namespace std;
using ll = long long;
// Time Complexity = O(log(log n))
vector<ll> sieve(ll n){

    vector<bool> isPrime(n+1,true); //true-> prime, false-> notprime

    for(ll i=2;i*i<isPrime.size();i++){

        if(isPrime[i]==true){
        for(ll j=i*i;j<isPrime.size();j+=i)
            isPrime[j] = false;
        }
    }

    vector<ll> res;
    for(ll i=2;i<isPrime.size();i++){
        if(isPrime[i] == true){
            res.push_back(i);
        }
    }
    return res;
}

void segmentedSieve(ll l,ll h){
    //1. make l root of h
    ll sq = sqrt(h);
    //2. get prime till root h using sieve
    vector<ll>primes = sieve(sq);
    // marking using prime 
    vector<bool> isPrime(h-l+1,true); //true-> prime, false-> notprime

    for(ll i=0;i<primes.size();i++){
        // find starting index for marking
        ll multiple = ceil((l * 1.0)/primes[i]);
        if(multiple == 1)
            multiple++;

        ll index = multiple*primes[i] - l;

        for(ll j=index;j<isPrime.size();j+=primes[i]){
                isPrime[j] = false; //not prime
        }
    }

    // print all prime nos
    for(ll i=0;i<isPrime.size();i++){
        if(isPrime[i]==true && i+l != 1){
            ll value = i+l;
            cout<<value<<" ";
        }
    }
}
int main() {
    ll l,h;
    cin>>l>>h;
    segmentedSieve(l,h);
return 0;
}