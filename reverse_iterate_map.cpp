#include<bits/stdc++.h>
using namespace std;
bool cmp(auto &a,auto &b)
{
    return a.first>b.first;
}
int main() {
    map<int,int>mp;
    mp[3]=6;
    mp[9]=0;
    mp[12]=78;

    auto it=--mp.end();
    for(;it!= --mp.begin();it--){
        cout<<it->first<<" "<<it->second<<endl;
    }

return 0;
}