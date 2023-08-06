#include<iostream>
#include<set>
using namespace std;
// Time complexity of operations in ordered set : O(log(n))

int main() {
    set<string> s;//it can be form of anything like set of maps,etc.
    s.insert("hdd");
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
    // set<string>:: iterator it = s.begin();
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<(*it)<<endl;
    // }

    // Recommended
    for(auto &value : s){
        cout<<value<<endl;
    }

    auto it2 = s.find("abc"); // find() func returns the iterator of the element in set
    if(it2 != s.end())
        cout<< *it2;

    // if(it2 != s.end())        
    //     s.erase(it2); 
    // OR
    s.erase("abc");
    cout<<endl;
    cout<<"abc is present: "<<s.count("abc")<<endl;
return 0;
}