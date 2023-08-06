#include<bits/stdc++.h>
using namespace std;
int solve(string s){
    int n=1;
    int res=0;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='1') res += n;
        n *= 2;
    }
    return res;
}
int main() {
    string s = "11001111101";
    cout<<solve(s)<<endl;
return 0;
}