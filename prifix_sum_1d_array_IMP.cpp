#include<iostream>
using namespace std;
// find the sum of array elements from l to r

//Globally declared arrys have 10^7 capacity
// CONSTRAINS:-
// N=T= 10^5
//a[i]= 10^9
const int N = 1e5;
int a[N];
int pf[N];
int main() {
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
       cin>>a[i];
       pf[i] = pf[i-1]+a[i];
   }
   int T;
   cin>>T;
   while(T--){
       int l,r;
       cin>>l>>r;
       cout<<(pf[l]-pf[r-1])<<endl;
   }
return 0;
}
// O(N) + O(T) = 10^5