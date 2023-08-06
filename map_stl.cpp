#include<iostream>
#include<bits/stdc++.h>
// Time complexity of operations in ordered maps : O(log(n))

// In 'maps' keys are unique and values are not unique means it can be same for two keys
using namespace std;
// In ordered maps elments are stored in ascending order
int main() {
//   map<string,int> m;
//   map<string,string> m;
  map<int,string> m; //--> 'int' is key and string is 'value' 
  m[1]="abc"; // O(log(n))
  m[5]="dve"; 
  m[3]="eoo";
  m[6]="lsa"; 
  // m[6]="aaa"; --> it will insert "aaa" to m[6] and remove "lsa"
  m.insert({8,"nnn"});//OR 

  // iterator declarationn
  map<int,string> :: iterator it;

  for(it=m.begin();it!=m.end();it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
  }
  cout<<endl;

  //recommended
  for(auto &pr : m){ 
    cout<<pr.first<<" "<<pr.second<<endl;
  }
  cout<<endl;
 
  // m.find() -> it will returns iterator of elment
  auto it2 = m.find(6);// -> O(log(n)) if not present then it will point to m.end()

  if(it2==m.end()){
    cout<<"NO VALUE"<<endl;
  }else{
    cout<<(*it2).first<<" "<<(*it2).second<<endl;
  } 
  cout<<endl;

  // m.erase() -> erase the value
  if(it2 != m.end())
    m.erase(it2); // -> O(log(n))
   for(auto &pr : m){ //***
    cout<<pr.first<<" "<<pr.second<<endl;
  }

  cout<<endl;
  cout<<"3 is present: "<<m.count(3)<<endl;
return 0;
}