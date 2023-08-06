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
#define tc ll t; cin >> t; while(t--)
const int mod = 1e9 + 7;
const int N = 1e6+10;

ll nCr(ll n, ll r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}
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
    string s;
    cin>>s;

    if(n<4){
        cs;
        return;
    }

    map<char,int>mp;
    mp['a']=0;
    mp['e']=0;
    mp['i']=0;
    mp['o']=0;
    mp['u']=0;

    for(int i=0;i<4;i++)
    mp[s[i]]++;

    if(mp['a']==0 && mp['e']==0 && mp['i']==0 && mp['o']==0 && mp['u']==0){
        cn;
        return;
    }

    for(int i=4;i<n;i++){
        mp[s[i-4]]--;
        mp[s[i]]++;
        if(mp['a']==0 && mp['e']==0 && mp['i']==0 && mp['o']==0 && mp['u']==0){
            cn;
            return;
        }
    }

    cs;
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