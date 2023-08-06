#include<bits/stdc++.h>
using namespace std;

void printVec(vector<string> &s){
    for(int i=0;i<s.size();i++){
    cout<<s[i]<<" ";
    cout<<endl;
    }
}

void solve(vector<string>& ans, string str, string output, int i) {
    //base case
    if(i>=str.length()) {
        ans.push_back(output);
        return ;
    }
    
    //exclude
    solve(ans, str, output, i+1);
    //include
    output.push_back(str[i]);
    solve(ans, str, output, i+1);
}

vector<string> subsequences(string str){
	
	vector<string> ans;
    string output = "";
    solve(ans,str,output,0);
    return ans;
}
int main() {
    string s = "abc";
    vector<string> ans;
    ans = subsequences(s);
    printVec(ans);
return 0;
}