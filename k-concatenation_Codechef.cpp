#include<bits/stdc++.h>
using namespace std;
#define endl ("\n")
typedef long long int lli;
lli kadanes(vector<lli> a){
    
    lli sum=a[0],maxsum=a[0];
    for(lli i=1;i<a.size();i++){
        if(sum<0)sum=a[i];
        else sum+=a[i];
        maxsum=max(maxsum,sum);
    }
    return maxsum;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  lli t; cin>>t;
  while(t--){
	   lli n,k;
	   cin>>n>>k;
	   vector<lli> a(n);
	   for(auto &i:a)cin>>i;
	   if(k==1)cout<<kadanes(a)<<"\n";
	   else{
	       lli s=0;
	       for(lli i=0;i<n;i++)
	            a.push_back(a[i]),s+=a[i];

	       cout<<max(kadanes(a),kadanes(a)+(s*(k-2)) )<<"\n";
	   }
  }
return 0;
}