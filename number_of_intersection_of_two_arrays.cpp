#include<bits/stdc++.h>
#define nl endl
using namespace std;

    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(a[i]);
        }
        int ans=0;
        for(int i=0;i<m;i++){
            if(st.find(b[i])!=st.end()){
                ans++;
                st.erase(b[i]);
            }
        }
        return ans;

        
        // unordered_map<int,int>mp;
        // for(int i=0;i<n;i++){
        //     mp[a[i]]++;
        // }
        // int ans=0;
        // for(int i=0;i<m;i++){
        //     if(mp[b[i]]>0){
        //         ans++;
        //         mp[b[i]]=0;
        //     }
        // }
        
        // return ans;
    }
    
int main() {

return 0;
}