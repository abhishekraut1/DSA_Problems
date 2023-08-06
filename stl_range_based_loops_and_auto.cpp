#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
   vector<int> v={1,2,3,4,5};
   // Range based loops
   for(int &value : v){ // giving reference of actual value
       cout<<value<<" ";
   }
   cout<<endl;
   // auto keyword assumes the datatype automatically
   for(auto &value : v){
       cout<<value<<" ";
   }
   cout<<endl;
   cout<<endl;
//****************************************
   vector<pair<int,int>> v_p = {{1,2},{5,6},{9,4}};
   // Range based loops
   for(pair<int,int> &value : v_p){
       cout<<value.first<<" "<<value.second<<endl;
   }
   cout<<endl;

   // auto keyword assumes the datatype automatically
   for(auto &value : v_p){
        cout<<value.first<<" "<<value.second<<endl;
   }
   cout<<endl;
return 0;
}