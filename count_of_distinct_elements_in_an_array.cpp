#include<bits/stdc++.h>
#define nl endl
using namespace std;
int count(vector<int>& arr){
    unordered_set<int> st;
    for(int i=0;i<arr.size();i++){
        st.insert(arr[i]);
    }
    // OR
    // unordered_set<int> st(arr,arr+n); --> for array
    // unordered_set<int> st(arr.begin(),arr.end()); --> for vector
    return st.size();
}
int main() {
    vector<int> arr={15,12,13,12,13,13,18};
    cout<<count(arr);
return 0;
}