#include<bits/stdc++.h>
#define nl endl
using namespace std;
    int lenOfLongSubarr(int a[],  int n, int k){ 
        int ans=0;
        int prefix_sum=0;
        unordered_map<int,int>h;
        
        for(int i=0;i<n;i++){
            prefix_sum += a[i];
            
            if(prefix_sum == k){
                ans = max(ans,i+1);
            }
            if(h.find(prefix_sum-k) != h.end()){
                ans = max(ans,i-h[prefix_sum-k]);
            }
            if(h.find(prefix_sum) == h.end()){
                h[prefix_sum]=i;
            }
            
        }
        
        return ans;
    } 
int main() {
    int n = 6;
    int a[] = {10, 5, 2, 7, 1, 9};
    int k = 15;
    cout<<lenOfLongSubarr(a,n,k)<<endl;
return 0;
}