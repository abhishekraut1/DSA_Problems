#include<bits/stdc++.h>
#define nl endl
using namespace std;
// Implemented using Hashing
// Time complexity of operations in unordered_set : O(1)
// not ordered 
// contains unique elements
int main() {
    unordered_set<int> s;
    // insert()
    s.insert(67);
    s.insert(23);
    s.insert(99);
    s.insert(45);

    // print
    for(int value:s){
        cout<<value<<" ";
    }cout<<endl;

    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<" ";
    }cout<<endl;

    // size()
    cout<<s.size()<<endl;

    // clear
    // s.clear();
    // cout<<s.size()<<endl;

    // find() --> returns iterator
    if(s.find(45)!=s.end())
        cout<<"Found "<<*s.find(45)<<endl;
    else
        cout<<"Not Found"<<endl;

    // count --> returns 1 if present
    if(s.count(67))
        cout<<"Found "<<s.count(67)<<endl;
    else
        cout<<"Not Found"<<endl;
    
    // erase()
    s.erase(45); //--> provide value
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<" ";
    }cout<<endl;

    auto itr=s.find(67); //--> provide iterator
    if(itr!=s.end())
        s.erase(itr);
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<" ";
    }cout<<endl;
    
return 0;
}