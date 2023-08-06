#include<bits/stdc++.h>
#define nl endl
using namespace std;
// TC = theta(n)
// SC = O(1)

void solve(vector<int>& a,vector<int>& b){
    int i=0,j=0;
    int m=a.size(),n=a.size();
    while(i<m && j<n){
        if(a[i]<=b[j]){ // '=' is to ensure stability i.e first came element will printed early
            cout<<a[i]<<" ";
            i++;
        }else{
            cout<<b[j]<<" ";
            j++;
        }
    }

    while(i<m){
        cout<<a[i]<<" ";
        i++;
    }
    
    while(j<n){
        cout<<b[j]<<" ";
        j++;
    }
}
int main() {
    vector<int>a={10,15,20};
    vector<int>b={5,6,6,15};
    solve(a,b);
return 0;
}