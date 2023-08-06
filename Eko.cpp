#include<bits/stdc++.h>
using namespace std;
using ll=long long int;using fl=float;using dl=double long;
#define cs cout << "Yes" << nl;
#define cn cout << "No" << nl;
#define F first
#define S second
#define pb push_back 
#define eif else if
#define nl '\n'
#define tc ll t; cin >> t; while(t--)
const int mod = 1e9 + 7;
bool cmp(pair<long long, long long> &a, pair<long long, long long> &b)
{
    return a.first + a.second < b.first + b.second;
}
bool cmp2(pair<long long, long long> &a, pair<long long, long long> &b)
{
     return a.first < b.first;
}
const int N = 1e6;
ll trees[N];
ll m;
int n;

bool isSufficientWood(int ht){
    ll wood=0;
    for(int i=0;i<n;i++)
    {
        if(trees[i] >= ht)
        wood += (trees[i]-ht);
    }

    return wood>=m;
}

void solve(){
    cin>>n;
    cin>>m;

    for(int i=0;i<n;i++)
        cin>>trees[i];

    ll s=0,e=1e9;

    while(e-s > 1){
        ll mid = s+(e-s)/2;

        if(isSufficientWood(mid)){
            s=mid;
        }else{
            e = mid-1;
        }
    }

    if(isSufficientWood(e))
    cout<<e<<nl;
    else
    cout<<s<<nl;
}

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);


solve();


return 0;
}