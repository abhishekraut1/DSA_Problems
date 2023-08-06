#include<bits/stdc++.h>
#define nl endl
using namespace std;
// how many minimum flips we have to take to make all elements same
    // TC=O(n);
    // by me
    void minFlips(vector<bool>&arr){
        int n=arr.size();
        bool flip;
        if(arr[0]==0) flip=1;
        else flip=0;
        int ct1,ct2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==flip){
                ct1=i;
            while(arr[i]==flip && i<n){
                i++;
            }
            ct2=i-1;
            cout<<"From "<<ct1<<" to "<<ct2<<endl;
            }
        }
    }
    // by gfg
    void minFlips2(vector<bool>&arr){
        int n=arr.size();
        for(int i=1;i<n;i++){
            if(arr[i] != arr[i-1]){
                if(arr[i] != arr[0])
                    cout<<"From "<<i<<" to ";
                else
                    cout<<i-1<<nl;
            }
        }
        if(arr[n-1] != arr[0])
            cout<<n-1<<"--"<<nl;
    }
int main() {
    vector<bool>arr ={1,0,0,0,1,0,0,1,1,1,1,0,1};
    minFlips(arr);
    cout<<nl;
    minFlips2(arr);
return 0;
}