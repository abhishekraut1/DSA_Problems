#include <bits/stdc++.h>
using namespace std;
int main(){

int K=10, n=12;
   vector<int> arr{-26, 32, 4, 17, -16, 18, 1, 8, 6, 8, 3, -13};
   vector<vector<int>> ans;
   sort(arr.begin(),arr.end());
   if(K<arr[n/2]){
       int i=0,j=0,k=0;
    while(k<n/2){
        if((arr[i]+arr[j]+arr[k])==K){
            vector<int> temp;
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            temp.push_back(arr[k]);
            
            ans.push_back(temp);
            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
            break;
        }
        i++;
        j=i+1;;
        k=j+1;
    }}
    else{
        int i=n/2,j=n/2,k=n/2;
         while(k<n){
        if((arr[i]+arr[j]+arr[k])==K){
            vector<int> temp;
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            temp.push_back(arr[k]);
            
            ans.push_back(temp);
            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
            break;
        }
        i++;
        j=i+1;;
        k=j+1;
    }
    }
    cout<<"end";
    return 0;
}