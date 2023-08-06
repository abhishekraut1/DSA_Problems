#include<bits/stdc++.h>
# define ll long long int
using namespace std;
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n],prefixSum[n];
        ll s = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s += arr[i];
            prefixSum[i] = s;
        }
        ll b = s;
        for(int i=0;i<n;i++){
            b = min(max(prefixSum[i],s - prefixSum[i]) , b);
        }
        cout<<b<<endl;
    }
return 0;
}