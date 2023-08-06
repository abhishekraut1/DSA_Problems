#include<bits/stdc++.h>
#define nl endl
using namespace std;
    // Efficient
    bool subArrayExists(int arr[], int n)    {
      int pf=0;
      unordered_set<int>s;
      
      for(int i=0;i<n;i++){
        pf += arr[i];
          
        if(s.find(pf) != s.end())
            return true;
        
        if(pf==0)
            return true;
        
        s.insert(pf);
      }
      
      return false;
    }

    bool subArrayExists(int arr[], int n)
    {
        int pf[n]={0};
        pf[0]=arr[0];
        for(int i=1;i<n;i++)
            pf[i] = pf[i-1] + arr[i];
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            mp[pf[i]]++;
            if(pf[i]==0)
                return 1;
        }
        
        for(int i=0;i<n;i++){
            if(mp[pf[i]]>1)
                return 1;
        }
        
        return 0;
    }
    
int main() {

return 0;
}