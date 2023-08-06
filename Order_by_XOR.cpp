#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define en "\n"
#define cs cout << "YES" << en
#define cn cout << "NO" << en
const int mod = 1e9 + 7;
bool cmp(pair<long long, long long> &a, pair<long long, long long> &b)
{
    if (a.first + a.second < b.first + b.second)
        return true;
    return false;
}
bool cmp2(pair<long long, long long> &a, pair<long long, long long> &b)
{
    if (a.first < b.first)
        return true;
    return false;
}
ll apFirstNEleSum(ll a, ll d, ll n)
{
    return (n * (2 * a + (n - 1) * d)) / 2;
}
ll blackBox(string &s)
{
    int n = s.size();
    ll hash = 0;
    ll p = 1;
    for (int i = 0; i < n; i++)
    {
        hash = (hash + ((s[i] - 'a' + 1) * p) % mod) % mod;
    }
    return hash;
}

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans = -1;
    for(int i=0;i<=10;i++){
        if(((i^a) < (i^b)) && ((i^b) < (i^c))){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long tc = 1;
    cin >> tc;
    for (long long t = 1; t <= tc; t++)
        solve();
}