#include<iostream>
#include<bits/stdc++.h>
// Time complexity of operations in multiset : O(log(n))
// It is used when we have to store same data more times in set
using namespace std;
int main() {
    multiset<string> s;
    s.insert("hdd");
    s.insert("abc");
    s.insert("ooaa");
    s.insert("lop");
    s.insert("hdd"); // --> it will insert double 
    
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

    auto it2 = s.find("abc"); //--> it will find the first occurence
    if(it2 != s.end())
        cout<< *it2;

    if(it2 != s.end())        
        s.erase(it2);  //--> it will erase only the string which is pointed by that iterator 
    // OR
    s.erase("abc"); // --> it will erase of all "abc" string in multiset 's'
return 0;
}