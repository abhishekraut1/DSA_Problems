#include<bits/stdc++.h>
#define nl endl
using namespace std;
// TC = theta(n)
// SC = O(n)
void find(int arr[],int n){
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    // for(int i=0;i<n;i++){
    //     auto it=mp.find(arr[i]);
    //     if(it!=mp.end())
    //         it->second=(it->second)+1;
    //     else
    //         mp[arr[i]]=1;
    // }

    for(auto x:mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<nl;
    // to print in order
    for(int i=0;i<n;i++){
        if(mp[arr[i]]==0)
            mp[arr[i]]=1;
        else if(mp[arr[i]] != -1){
            cout<<arr[i]<<" "<<mp[arr[i]]<<endl;
            mp[arr[i]]=-1;
        }
    }
}
int main() {
    int arr[]={10,12,10,15,10,20,12,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    find(arr,n);
return 0;
}