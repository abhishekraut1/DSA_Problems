#include<bits/stdc++.h>
using namespace std;
// Time Complexity : O(n2)
// Time Complexity : O(n2)
int solve1(bool arr1[],bool arr2[],int n){
    int maxLen=0;
    for(int i=0;i<n;i++){
        int preSum1=0;
        int preSum2=0;

        for(int j=i;j<n;j++){
        preSum1 += arr1[j];
        preSum2 += arr2[j];
    if(preSum1 == preSum2){
        int len = j-i+1;

        if(len>maxLen) maxLen = len;
    }
    }
    }

    return maxLen;
}

int solve2(bool arr1[],bool arr2[],int n){
    int maxLen=0;
    int preSum1=0,preSum2=0;

    int diff[2*n+1];

    memset(diff,-1,sizeof(diff)); //******

    for(int i=0;i<n;i++){
        preSum1 += arr1[i];
        preSum2 += arr2[i];

        int curr_diff = preSum1-preSum2;
        int diffIndex = n+curr_diff;   

        if(curr_diff==0) maxLen=i+1;

        else if(diff[diffIndex] == -1)
            diff[diffIndex] = i;
        
        else{ 
            int len = i - diff[diffIndex]; // part from i+1 to diffIndex have same sum

            if(len>maxLen) maxLen = len;
        }
    }
    
    return maxLen;
}
int main() {
    bool arr1[] = {0, 1, 0, 1, 1, 1, 1};
    bool arr2[] = {1, 1, 1, 1, 1, 0, 1};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    cout<<solve1(arr1,arr2,n)<<endl;
    cout<<solve2(arr1,arr2,n)<<endl;

return 0;
}