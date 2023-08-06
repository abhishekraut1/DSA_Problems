#include<bits/stdc++.h>
using namespace std;
using ll=long long int;using fl=float;using dl=double long;
#define F first
#define S second
#define pb push_back
#define eif else if
#define nl endl

void solve(int t){
    ll n,x,y;
    cin>>n>>x>>y;
    ll totalSum = n*(n+1)/2;
    if(totalSum%(x+y) != 0){
        cout<<"Case #"<<t<<": IMPOSSIBLE"<<endl;
        return;
    }else cout<<"Case #"<<t<<": POSSIBLE"<<endl;

    ll otherSum = (x*totalSum)/(x+y);
    vector<int> ans;
    for(int i=n;i>0;i--){
        if(i<=otherSum){
            ans.push_back(i);
            otherSum -= i;
        }
    }
    cout<<ans.size()<<nl;
    for(auto i : ans)
    cout<<i<<" ";
    cout<<nl;

}
int main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve(t);
    }

    return 0;
}