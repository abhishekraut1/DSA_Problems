#include<bits/stdc++.h>
using namespace std;
using ll=long long int;using fl=float;using dl=double long;
#define cs cout << "YES" << nl;
#define cn cout << "NO" << nl;
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

ll query(int k)
{
    cout<<"? "<<k<<" ";
    for(int i=1;i<=k;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    ll x; cin>>x;

    return x;
}

void solve(){
    int n; cin>>n;

    vector<ll>ps(n+1,0);

    for(int i=1;i<=n;i++)
    {
        ll t; cin>>t;
        ps[i]=ps[i-1]+t;
    }
    for(int i=1;i<=n;i++)
    {
        // cout<<ps[i]<<nl;
    }

    int ans=n;
    int s=1,e=n;
    
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(query(mid) != ps[mid])
        {
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    } 
    cout<<"! "<<ans<<endl;
}

int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

tc{
solve();
}

return 0;
}