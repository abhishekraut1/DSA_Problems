#include<bits/stdc++.h>
using namespace std;
string solve(string s){
    string ans;
    int n = s.length();
    int i=0;
    while(i<n-1){
        if(s[i]==s[i+1]){
            while(s[i]==s[i+1] && i<n-1){
                i++;
            }
            ans.push_back(s[i]);
            i++;
        }else if(i<n-1){
            ans.push_back(s[i]);
            i++;
        }
    }
    ans.push_back(s[i]);

    return ans;
}
int main() {
    cout<<solve("aaaaaabbbabaabbabbbba");
return 0;
}