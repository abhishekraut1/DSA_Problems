#include<iostream>
using namespace std;
#include<bits/stdc++.h>
// Time complexity of operations in ordered maps : O(1)
// Time Complexity of unordered maps is less than ordered maps hence use them when order is  not important 
// Q. Find the frequencies of strings and print them  
int main() {
    unordered_map<string,int> m; // unordered_map can be form of only primitive data types
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
return 0;
}