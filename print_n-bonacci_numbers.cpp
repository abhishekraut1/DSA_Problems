#include<bits/stdc++.h>
#define nl endl
using namespace std;
// TC = O(n)
void n_bonacci(int n,int m){
    int a[m]={0};
    a[n-1]=1;
    a[n]=1;
    // Uses sliding window
    for(int i=n+1;i<m;i++){
        a[i] = a[i-1] + a[i-1] - a[i-(n+1)];
    }
    for (int i = 0; i < m; i++)
       cout << a[i] << " ";
}
int main() {
    n_bonacci(4,10);
return 0;
}