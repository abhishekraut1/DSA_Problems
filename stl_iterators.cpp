#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// iterators used to iterate through containers
int main() {
  vector<int> v={1,2,3,4,5};
  vector<int> :: iterator it;
  for(it=v.begin();it!=v.end();it++){
      cout<<(*it)<<" ";
  }
    cout<<endl;
    
    for(auto &value:v){
        cout<<value<<" ";
    }
    cout<<endl;

  cout<<endl;
  vector<pair<int,int>> v_p = {{1,2},{5,6},{9,4}};
  vector<pair<int,int>> :: iterator it2;
  for(it2=v_p.begin();it2!=v_p.end();it2++){
      cout<<(*it2).first<<" "<<(*it2).second<<endl;
  }
  // another method
  for(it2=v_p.begin();it2!=v_p.end();it2++){
      cout<< (it2->first) <<" "<< (it2->second) <<endl;
  }
return 0;
}