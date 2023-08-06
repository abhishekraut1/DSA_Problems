#include<bits/stdc++.h>
using namespace std;

void printVec(vector<vector<int>> &s){
    for(int i=0;i<s.size();i++){
    for(int j=0;j<s[i].size();j++){
    cout<<s[i][j]<<" ";
    }
    cout<<endl;
    }
}

void solve(vector<int> v,vector<vector<int>>& ans,int index){
    // base case
    if(index >= v.size()){
        ans.push_back(v);
        return;
    }

    for(int j=index;j<v.size();j++){
        swap(v[index],v[j]);
        solve(v,ans,index+1);
        // backtrack to make neutralize the changes
        swap(v[index],v[j]);
    }

}

vector<vector<int>> permutation(vector<int> &v){
    vector<vector<int>> ans;
    int index = 0;
    solve(v,ans,index);

    return ans;
}
int main() {
    vector<int> v = {1,2,3};
    vector<vector<int>> ans = permutation(v);
    printVec(ans);
return 0;
}