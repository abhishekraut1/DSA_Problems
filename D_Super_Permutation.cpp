#include<bits/stdc++.h>
using namespace std;
using ll=long long int;using fl=float;using dl=double long;
#define cs cout << "YES" << nl
#define cn cout << "NO" << nl
#define F first
#define S second
#define pb push_back
#define eif else if 
#define nl '\n'
// #define tc ll t; cin >> t; while(t--)
const int mod = 1e9 + 7;
const int N = 1e6+10;

//// Prime factors of an number using SIEVE Algo
//// Nlog(log(N))
//vector<bool>isPrime(N,true);
//vector<int>lpf(N,0),hpf(N,0);
//void lpfhpf(){
//    isPrime[0] = isPrime[1] = false;
//    for(int i=2;i<=N;i++){
//        if(isPrime[i] == true){
//            lpf[i] = hpf[i] = i;
//            for(int j=2*i;j<=N;j+=i){
//                isPrime[j] = false;
//                hpf[j] = i;
//                if(lpf[j] == 0){
//                    lpf[j] = i;
//                }
//            }
//        }
//    }
////}
//vector<int> primeFactors(int n){
//    vector<int>prime_factors;
//    while(n>1){
//        int prime_factor = hpf[n];
//        while(n % prime_factor == 0){
//            n /= prime_factor;
//            prime_factors.push_back(prime_factor);
//        }
//    }
//    return prime_factors;
//}
//// All divisors of an number using SIEVE Algo
//// Nlog(N)
//vector<vector<int>> divisors(N);
//void allDivisors(){
//    for(int i=2;i<=N;i++){
//        for(int j=i;j<=N;j+=i){
//            divisors[j].push_back(i);
//        }
//    }
//}
//vector<ll> sieve(ll n){

//    vector<bool> isPrime(n+1,true); //true-> prime, false-> notprime

//    for(ll i=2;i*i<isPrime.size();i++){

//        if(isPrime[i]==true){
//       for(ll j=i*i;j<isPrime.size();j+=i)
//            isPrime[j] = false;
//        }
//    }

//    vector<ll> res;
//    for(ll i=2;i<isPrime.size();i++){
//        if(isPrime[i] == true){
//            res.push_back(i);
//        }
//    }
//    return res;
//}
//// Segemented Sieve
//vector<ll> segmentedSieve(ll l,ll h){
//    //1. make l root of h
//    ll sq = sqrt(h);
//    //2. get prime till root h using sieve
//    vector<ll>primes = sieve(sq);
//    // marking using prime 
//    vector<bool> isPrime(h-l+1,true); //true-> prime, false-> notprime

//    for(ll i=0;i<primes.size();i++){
//        // find starting index for marking
//        ll multiple = ceil((l * 1.0)/primes[i]);
//        if(multiple == 1)
//            multiple++;

//        ll index = multiple*primes[i] - l;

//        for(ll j=index;j<isPrime.size();j+=primes[i]){
//                isPrime[j] = false; //not prime
//        }
//    }

//    // print all prime nos
//    vector<ll> res;
//    for(ll i=0;i<isPrime.size();i++){
//        if(isPrime[i]==true && i+l != 1){
//            ll value = i+l;
//            res.push_back(value);
//        }
//    }

//    return res;
//}

//All 8 Directions
vector<vector<int>>dir = {{1,0},{0,1},{1,1},{1,-1},{-1,1},{-1,0},{0,-1},{-1,-1}};
bool cmp(pair<long long, long long> &a, pair<long long, long long> &b)
{
    return a.first + a.second < b.first + b.second;
}
bool cmp2(pair<long long, long long> &a, pair<long long, long long> &b)
{
     return a.first < b.first;
}
ll apFirstNEleSum(ll a, ll d, ll n)
{
    return (n * (2 * a + (n - 1) * d)) / 2;
}
int modulo(string num, int a)
{

    int res = 0;

    for (int i = 0; i < num.length(); i++)
        res = (res * 10 + num[i] - '0') % a;

    return res;
}

void solve(){
    int n;
    cin>>n;

    if(n==1){
        cout<<1<<nl;
        return;
    }

    vector<int>ans(n);
    ans[0]=n;
    set<int>s;

    for(int i=1;i<n;i++){
        s.insert(i);
    }

    int ps=n;
    int i=1;
    auto it = s.begin();
    int ct=0;
    map<int,int>mp;

    bool fl = 0;
        while(i<n && !s.empty()){
            // if(fl==0)
            it = s.begin();

            while((((ps + *it) % n == 0) || mp.find((ps + *it) % n) != mp.end()) && it != s.end()){
                ct++;
                if(ct == 2){
                    cout<<-1<<nl;
                    return;
                }
                fl = 1;
                it++;
            }
            if(it == s.end()){
                continue;
            }
            ct = 0;

            ps += *it;
            ans[i] = *it;
            mp[*it]++;
            s.erase(it);
            i++;
        }

    for(int x:ans)
    cout<<x<<" ";
    cout<<nl;
}

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t; cin>>t;
while(t--){
solve();
}

return 0;
}