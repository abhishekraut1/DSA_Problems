#include <bits/stdc++.h>
using ll=long long int;
using namespace std;
ll dist(ll x,ll y){
    return x*x+y*y;
}

int main()
{
    ll t; cin>>t;
    ll c=1;
    while(t--){
        ll rs,rh;
        cin>>rs>>rh;
        
        ll n; cin>>n;
        vector<ll>x(n+1);
        vector<ll>y(n+1);
        for(int i=1;i<=n;i++)
            cin>>x[i]>>y[i];
        
        ll m; cin>>m;
        vector<ll>z(n+1);
        vector<ll>w(n+1);
        for(int i=1;i<=m;i++)
            cin>>z[i]>>w[i];
        
        // ******** TC=O(nxm)****************
        // ll s_red=0;
        // for(ll i=1;i<=n;i++){
        // bool is_scoring=dist(x[i],y[i]) <= (rs+rh)*(rs+rh);
        // for(ll j=1;j<=m;j++){
        //     is_scoring &= dist(x[i],y[i]) < dist(z[j],w[j]);
        // }
        // s_red+=is_scoring;
        // }
        
        // ll s_yellow=0;
        // for(ll i=1;i<=m;i++){
        // bool is_scoring=dist(z[i],w[i]) <= (rs+rh)*(rs+rh);
        // for(ll j=1;j<=n;j++){
        //     is_scoring &= dist(z[i],w[i]) < dist(x[j],y[j]);
        // }
        // s_yellow+=is_scoring;
        // }

        // ******** TC=O(n+m) ****************
        ll s_red=0;
        ll s_yellow=0;

        if(n==0){
            s_red=0;
            for(ll i=1;i<=m;i++){
            s_yellow += dist(z[i],w[i]) <= (rs+rh)*(rs+rh) ? 1 : 0;
            }
        }else if(m==0){
            s_yellow=0;
            for(ll i=1;i<=n;i++){
            s_red += dist(x[i],y[i]) <= (rs+rh)*(rs+rh) ? 1 : 0;
            }   
        }else{
        ll m_red=dist(x[1],y[1]);
        for(ll i=1;i<=n;i++){
        m_red = min(m_red,dist(x[i],y[i]));
        }
        ll m_yellow=dist(z[1],w[1]);
        for(ll i=1;i<=m;i++){
        m_yellow = min(m_yellow,dist(z[i],w[i]));
        }

        for(ll i=1;i<=n;i++){
        s_red += dist(x[i],y[i])<m_yellow ? 1 : 0;
        }
        for(ll i=1;i<=m;i++){
        s_yellow += dist(z[i],w[i])<m_red ? 1 : 0;
        }
        }

        cout<<"Case #"<<c<<": "<<s_red<<" "<<s_yellow<<endl;
        c++;

    }
    return 0;
}