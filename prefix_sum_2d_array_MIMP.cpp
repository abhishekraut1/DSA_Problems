#include<iostream>
using namespace std;
// find the sum of 2D array elements from a,b to c,d

//Globally declared arrys have 10^7 capacity
// CONSTRAINS:-
// N=T= 10^3
const int N=1e3+10;
int arr[N][N];
long long pf[N][N];
int main() {
   int n;
   cin>>n;
   //taking input of 2D array
   for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
       cin>>arr[i][j];
       // calculate prefix sum
       pf[i][j] = arr[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
   }
   }
   int T;
   cin>>T;
   while(T--){
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       // print prefix sum between a,b and c,d
       cout<<pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1]<<endl;
   }
return 0;
}