#include <bits/stdc++.h>
using namespace std;
void permute(string &s,int i){
    if (i == s.length() - 1){
        cout<<s<<endl;
        return;
    }
    for (int j = i; j < s.length(); j++)    {
        // swap
        swap(s[i], s[j]);
        permute(s, i + 1);
        //backtrack
        swap(s[i], s[j]);
    }
}
int main(){
    string s = "ABC";
    permute(s,0);
    return 0; 
}