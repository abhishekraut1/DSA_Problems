#include<bits/stdc++.h>
using namespace std;
// You are given an array consisting of n integers which denote the position of a stall. You are also given an integer k which denotes the number of aggressive cows. 
//You are given the task of assigning stalls to k cows such that the minimum distance between any two of them is the maximum possible.
// The first line of input contains two space-separated integers n and k.
// The second line contains n space-separated integers denoting the position of the stalls.

    bool canPlace(int mid,vector<int> &stalls,int n,int k){
        int cow=stalls[0];
        int cnt=1;
        for(int i=1;i<n;i++){
            if(stalls[i]-cow>=mid){
                cow=stalls[i];
                cnt++;
            }
            if(cnt==k) return true;
        }
        return false;
    }


    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int s=1,e=stalls[n-1]-stalls[0];
        int res=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(canPlace(mid,stalls,n,k)){
                s=mid+1;
                res=mid;
            }else{
                e=mid-1;
            }
        }
        
        return res;
    }
int main() {
    int n=5;
    int k=3;
    vector<int> stalls = {1, 2, 4, 8, 9};
    cout<<solve(n,k,stalls)<<endl;
return 0;
}