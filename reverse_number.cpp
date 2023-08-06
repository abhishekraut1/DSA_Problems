#include<bits/stdc++.h>
#define nl endl
using namespace std;

void rev(int n){
    int l[10];
    int i=0;
    while(n!=0){
        l[i]=n%10;
        n=n/10;
        i++;
    }
    for(int j=0;j<i;j++) cout<<l[j];

    cout<<nl;
}
int main() {
    int n; cin>>n;
    rev(n);
return 0;
}
