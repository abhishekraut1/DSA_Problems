#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    pair<int,string> p;
    // p = make_pair(2,"abc");
    p = {2,"abc"};
    cout<<p.first<<" "<<p.second<<endl;
       
     pair<int,string> p2;
     cin>>p2.first; //taking input
     cin>>p2.second;
     cout<<"After input->"<<p2.first<<" "<<p2.second<<endl;

    //pair of array
    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {4,7};
    p_array[2] = {9,3};
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    return 0;
}