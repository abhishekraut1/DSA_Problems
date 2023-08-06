#include<bits/stdc++.h>
using namespace std;

void printVec(vector<string> s){
    for(int i=0;i<s.size();i++){
    cout<<s[i]<<" ";
    cout<<endl;
    }
}

bool isSafe(vector<vector<int>> v,vector<vector<int>> visited,int x,int y,int n){
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && v[x][y] == 1)
        return true;
    else 
        return false;
}

void solve(vector<string>& ans,string path,vector<vector<int>> v,int n,vector<vector<int>> visited,int x,int y){
    // base case
    if(x == n-1 && y == n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y] = 1;
    
    // 4 choices - D L R U
    
    //down
    int newx = x+1;
    int newy = y;
    if(isSafe(v,visited,newx,newy,n)){
        path.push_back('D');
        solve(ans,path,v,n,visited,newx,newy);
        path.pop_back();
    }

    //left
    newx = x;
    newy = y-1;
    if(isSafe(v,visited,newx,newy,n)){
        path.push_back('L');
        solve(ans,path,v,n,visited,newx,newy);
        path.pop_back();
    }

    //right
    newx = x;
    newy = y+1;
    if(isSafe(v,visited,newx,newy,n)){
        path.push_back('R');
        solve(ans,path,v,n,visited,newx,newy);
        path.pop_back();
    }

    //up
    newx = x-1;
    newy = y;
    if(isSafe(v,visited,newx,newy,n)){
        path.push_back('U');
        solve(ans,path,v,n,visited,newx,newy);
        path.pop_back();
    }

    visited[x][y] = 0;
}


vector<string> ratINMaze(vector<vector<int>> &v,int n){
    vector<string> ans;
    if(v[0][0]==0)
        return ans;

    vector<vector<int>> visited = v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j] = 0;
        }
    }
    int srcx = 0;
    int srcy = 0;
    string path = "";
    solve(ans,path,v,n,visited,srcx,srcy);
    sort(ans.begin(),ans.end());

    return ans;
}
int main() {
    vector<vector<int>> v = { {1, 0, 0, 0},
                             {1, 1, 0, 1}, 
                             {1, 1, 0, 0},
                             {0, 1, 1, 1}  };
    int n = 4;
    printVec(ratINMaze(v,n));
return 0;
}