#include<bits/stdc++.h>
using namespace std;
int main() {
    int a1[] = {9,3,4,5};
    int a2[] = {3,9,6,7};
    int len = sizeof(a1)/sizeof(a1[0]);
    int a=0,b=0,t=0;
    vector<int>ans;
    for(int i=len-1;i>=0;i--){
        a=a1[i]+t; b=a2[i];
        if(i==0){
            ans.push_back(a+b);
            break;
        }
        if((a+b) < 10){
            ans.push_back(a+b);
            t = (a+b)/10;
        }else{
            t = (a+b)/10;
            int t2 = (a+b)%10;
            ans.push_back(t2);
        }
    }

    for(int i=len-1;i>=0;i--)
    cout<<ans[i];
return 0;
}