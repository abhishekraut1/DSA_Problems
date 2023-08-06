#include<bits/stdc++.h>
using namespace std;
int main() {
    // (1)
    map<pair<int,int>,int> mp;
    for(int i=0;i<3;i++){
        int x,y,z;
        cin>>x>>y>>z;
        mp[{x,y}]=z;
    }
    for(auto &x:mp){
        cout<<x.first.first<<" "<<x.first.second<<" -> "<<x.second<<endl;
    }

    // (2)
    map<pair<string,string>,vector<int> > m;
    for(int i=0;i<3;i++){
        string x,y;
        cin>>x>>y;
        int n; cin>>n;
        for(int j=0;j<n;j++){
            int t; cin>>t;
            m[{x,y}].push_back(t);
        }
    }

    for(auto &x : m){
        cout<<x.first.first<<" "<<x.first.second<<endl;
        for(auto value : x.second){
            cout<<value<<endl;
        }
    }

    // (3)
    map<pair<string,string>,set<int> > m2;
    for(int i=0;i<3;i++){
        string x,y;
        cin>>x>>y;
        int n; cin>>n;
        for(int j=0;j<n;j++){
            int t; cin>>t;
            m2[{x,y}].insert(t);
        }
    }

    for(auto &x : m2){
        cout<<x.first.first<<" "<<x.first.second<<endl;
        for(auto &value : x.second){
            cout<<value<<endl;
        }
    }
return 0;
}
