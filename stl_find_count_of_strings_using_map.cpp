#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Q. Arrange strings in lexographical order and
// also print their count. 
int main() {
    map<string,int> m;
    int n; //no. of strings
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }

    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
return 0;
}