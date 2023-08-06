#include<bits/stdc++.h>
using namespace std;
// TC=O(n)
void patSearchinng(string &s,string &pat){
    int n=s.length();
    int m=pat.length();
    for(int i=0;i<=(n-m);){
        int j;
        for(j=0;j<m;j++){
            if(s[i+j]!=pat[j])
                break;
        }
        if(j==m){
           cout<<i<<" ";
        }
        if(j==0)
            i++;
        else
            i=i+j;
    }
}
int main() {
    string s="abcabcd";
    string pat="abcd";
    patSearchinng(s,pat);
return 0;
}