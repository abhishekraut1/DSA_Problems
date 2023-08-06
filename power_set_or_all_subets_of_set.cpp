#include<bits/stdc++.h>
using namespace std;

void printVec(vector<vector<int>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
    }
}

void solve(vector<int> v,vector<int> output,int index,vector<vector<int>> &ans){
    //base case
    if(index >= v.size()){
        ans.push_back(output);
        return;
    }

    //exclude
    solve(v,output,index+1,ans);

    //include
    output.push_back(v[index]);
    solve(v,output,index+1,ans);
}
vector<vector<int>> allSubsets(vector<int> v){
    vector<vector<int> > ans;
        vector<int> output;
        int index = 0;
        solve(v, output, index, ans);

        return ans;
}

int main() {
    vector<int> v = {1,2,3};
    vector<vector<int>> ans(allSubsets(v));
    printVec(ans);
return 0;
}