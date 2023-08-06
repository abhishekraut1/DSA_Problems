#include<bits/stdc++.h>
using namespace std;
// find the sum between l ans r index.
int N = 1e5;
int main() {
    int pf[N]{0};
    int n = 7;
    int arr[] = {1,2,3,4,5,6,7};
    for(int i=1;i<=n;i++){
        pf[i] = pf[i-1] + arr[i];
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<< pf[r] - pf[l-1] <<endl;
    }
return 0;
}