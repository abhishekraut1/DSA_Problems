#include<bits/stdc++.h>
using namespace std;
// lower bound of an element -> that element or greater
// upper bound of an element -> always greater
// if NOT present then return next element to range
int main() {
    // For ARRAYS
    int n=6;
    int arr[]={4,5,5,7,8,25}; // Always first SORT the array or vector
    sort(arr,arr+n);

    int index = lower_bound(arr,arr+4,5) - arr;  // defined range
    cout<<(index)<<endl;
    
    index = upper_bound(arr,arr+4,5) - arr; 
    cout<<(index)<<endl;

    // For VECTORS
    vector<int>v={4,5,5,7,8,25};
    sort(v.begin(),v.end());
    index = lower_bound(v.begin(),v.begin()+5,199) - v.begin();  // defined range index 0 to 0+5 
    cout<<(index)<<endl;
    
    // For SET
    set<int>s={4,5,5,7,8,25};
    auto itr = s.upper_bound(5);
    cout<<*itr<<endl;

    // For MAP
    map<int,int>mp={{4,5},{5,7},{8,25}};
    auto it2 = mp.upper_bound(5);
    cout<<it2->first<<" "<<it2->second<<endl;

    // For PAIR
    vector<pair<int,int>>vp={{3,5},{3,7},{3,25}};
    sort(v.begin(),v.end());
    pair<int,int>pr={4,5};
    auto it3 = lower_bound(vp.begin(),vp.end(),pr);
    cout<<it3->first<<" "<<it3->second<<" at index = "<<(it3 - vp.begin())<<endl;
return 0;
}