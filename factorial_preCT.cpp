#include<iostream>
using namespace std;
// Pre computation technique
// store all factorials already 
// factorial does not exeed 10^5
const int M = 1e9+7;
const int N = 1e5+10;
long long fact[N];
int main() {
  fact[0]=fact[1]=1;
  for(int i=2;i<N;i++){
      fact[i] = (i * fact[i-1])%M;
  }
  int T;
  cin>>T;
  while(T--){
      int n;
      cin>>n;
      cout<<fact[n]<<endl; // O(N)+O(T) = 1e5 + 1e5
  }
return 0;
}