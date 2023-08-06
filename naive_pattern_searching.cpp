#include<bits/stdc++.h>
using namespace std;
// TC=O(n-m+1)*m
void patSearchinng(string &s,string &pat){
    int n=s.length();
    int m=pat.length();
    for(int i=0;i<=(n-m);i++){
        int j;
        for(j=0;j<m;j++){
            if(s[i+j]!=pat[j])
                break;
        }
        if(j==m)
           cout<<i<<" ";
    }
}
int main() {
    string s="abcabcd";
    string pat="abcd";
    patSearchinng(s,pat);
return 0;
}