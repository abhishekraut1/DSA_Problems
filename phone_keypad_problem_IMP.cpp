#include<bits/stdc++.h>
using namespace std;

void printVec(vector<string> &s){
    for(int i=0;i<s.size();i++){
    cout<<s[i]<<" ";
    cout<<endl;
    }
}
// Here 'ans' is pass by reference 
void solve(string digits,string output,int index,vector<string>& ans,string mapping[]){
    // base case
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }

    int num = digits[index]-'0';
    string str = mapping[num];

    for(int i=0;i<str.length();i++){
        output.push_back(str[i]);
        solve(digits,output,index+1,ans,mapping);
        output.pop_back();
    }
}
vector<string> phoneKeypad(string digits){
    vector<string> ans;
    if(digits.length()==0)
        return ans;

    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string output;
    int index = 0;
    solve(digits,output,index,ans,mapping);
    return ans;
}
int main() {
    string digits;
    cin>>digits;

    vector<string> ans;
    ans = phoneKeypad(digits);
    printVec(ans);
return 0;
}