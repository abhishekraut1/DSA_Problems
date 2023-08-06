#include<iostream>
using namespace std;
//find the count of numbres in an array
const int N = 1e7+10;
int hsh[N]; //--> all values are 0
int main() {
  // array input
    int n;
    int a[n];
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>a[i];
      hsh[a[i]]++;
    }
    int T;
    cin>>T;
    while(T--){
      int x;
      cin>>x;
      cout<<hsh[x]<<endl;
    }
return 0;
}