#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Time complexity of operations in unordered set : O(1)
int main() {
    unordered_set<string> s; // can't set of complex data types
    s.insert("hdd"); // it is inserting from front end without considering order
    s.insert("abc");
    s.insert("ooaa");
    s.insert("lop");
    // s.insert("hdd"); --> it will not insert
    
    //input
    int n; // no. of strings
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    //print
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<(*it)<<endl;
    // }

    // Recommended
    for(auto &value : s){
        cout<<value<<endl;
    }

    auto it2 = s.find("abc");
    if(it2 != s.end())
        cout<< *it2;

    // if(it2 != s.end())        
    //     s.erase(it2); 
    // OR
    s.erase("abc");
return 0;
}