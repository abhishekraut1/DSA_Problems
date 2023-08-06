#include<bits/stdc++.h>
#define nl endl
using namespace std;
// Implemented using Hashing
int main() {
    unordered_map<string,int> mp;
    // mp.insert()
    mp.insert({"first",1});
    mp.insert({"second",2});
    mp["second"]=4; // it will change the value at "second"
    //OR
    mp["third"]=3;
    mp["fourth"]=4;
    mp["fifth"]=5;

    // to iterate
    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<nl;
    }
    cout<<nl;
    mp.erase("fifth"); //erase element
    // mp.erase(mp.begin(),mp.end()); // erase all map exclude mp.end()
    cout<<mp.size()<<nl;
    
    // for(auto it=mp.begin();it!=mp.end();it++){
    //     cout<<it->first<<" "<<it->second<<nl;
    // }
    // cout<<nl;

    // mp.find() --> returns iterator
    if(mp.find("third") != mp.end())
        cout<<"Found"<<nl;
    else
        cout<<"Not Found"<<nl;

    auto it=mp.find("third");
    if(it != mp.end())
        cout<<it->first<<" "<<it->second<<nl;
    else
        cout<<"Not Found"<<nl;
    
    
    // if(mp.find("second") != mp.end())
    //     mp.find("second")->second = 33;

    // mp.count() --> return 1 if element is present else return 0
    cout<<mp.count("second")<<nl;
    cout<<mp.count("new")<<nl;
return 0;
}
