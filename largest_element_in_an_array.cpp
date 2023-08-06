#include<bits/stdc++.h>
#define nl endl
using namespace std;
int firstLargest(vector<int>&a){
    int max=0;
    for(int i=1;i<5;i++)
        if(a[i]>a[max]) max=i;
    return max;
}
int secLargest(vector<int>&a){
    int max=firstLargest(a);
    int smax=-1;
    for(int i=0;i<a.size();i++){
        if(a[i]!=a[max]){
            if(smax==-1)
                smax=i;
            else if(a[i]>a[smax])
                smax=i;
        }
    }
    return smax;
}
int secLargest2(vector<int>&a){
    int max1=0;
    int max2=-1;
    for(int i=0;i<a.size();i++){
        if(a[i]>a[max1]){
            max2=max1;
            max1=i;
        }else if(a[i]!=a[max1]){
            if(max2==-1 || a[i]>a[max2])
                max2=i;
        }
    }
    return max2;
}
int main() {
    vector<int>a={4,53,1,6,90};
    cout<<firstLargest(a)<<nl;
    cout<<secLargest(a)<<nl;
    cout<<secLargest2(a);
return 0;
}