#include<bits/stdc++.h>
using namespace std;

    static bool cmp9(pair<int,int> &a,pair<int,int> &b)
    {
        return a.second>b.second;
    }

bool cmp(int a,int b){
    return a<b;
}

bool cmp2(pair<int,int>& a,pair<int,int>&b){
    if(a.first == b.first){  // sorting in increasing orde
        return a.second < b.second;
    }
    return a.first<b.first;
}
int main() {
    vector<int>v={8,2,44,2,11,5,0};
    // sort(v.begin(),v.end(),cmp);
    sort(v.begin()+2,v.end()-1,cmp); // sort for perticular range

    for(int x:v)
        cout<<x<<" ";
    cout<<endl;
    set<pair<int,int> >vp={{8,2},{2,6},{2,5},{0,1}};
    sort(vp.begin(),vp.end(),cmp9);
    // sort(vp.begin(),vp.end(),greater<pair<int,int>>()); Inbuilt comparator for sorting in decresing order

    for(auto x:vp){
        cout<<x.first<<" "<<x.second<<endl;
    }
return 0;
}
