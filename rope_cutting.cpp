#include<bits/stdc++.h>
using namespace std;
int maxPieces(int n,int a,int b,int c){
    if(n==0)  return 0;
    if(n<0) return -1;
    int res = max( max( maxPieces(n-a,a,b,c),
                  maxPieces(n-b,a,b,c)),
                  maxPieces(n-c,a,b,c));
    // interesting corner condition
    // if res=-1 i.e -1 is max among all 3 then it not valid
    if(res==-1) return -1;
    return res+1;
}
int main() {
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<maxPieces(n,a,b,c);
return 0;
}