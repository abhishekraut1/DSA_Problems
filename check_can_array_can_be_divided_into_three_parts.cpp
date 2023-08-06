#include<bits/stdc++.h>
#define nl endl
using namespace std;
int canDivide(vector<int>& arr){
    int n=arr.size();
    int total_sum=0;
    for(int i=0;i<n;i++){
        total_sum += arr[i];
    }
    int e=n-1;
    int l_sum=0,r_sum=0;
    for(int s=0;s<n;s++){
        l_sum+=arr[s];
        while(l_sum > r_sum){
            r_sum += arr[e];
            e--;
        }
        cout<<l_sum<<" "<<r_sum <<" "<<(total_sum - (l_sum+r_sum))<<nl;
        if(l_sum == r_sum && l_sum == (total_sum - (l_sum+r_sum))){
            cout<<s<<" "<<e+1<<" "<<nl;
            return true;
        }
    }
    return false;
}
int main() {
    vector<int> arr = { 1, 3, 4, 0, 4 };
    cout<<canDivide(arr)<<nl;
return 0;
}