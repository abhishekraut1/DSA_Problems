#include<bits/stdc++.h>
using namespace std;
// useful/IMP inbuilt functions/algoritms in cpp 
int main() {
    vector<int>v={1,4,66,2,6,2,4,56};
    cout<<*min_element(v.begin(),v.end())<<endl; // returns iterator
    cout<<*max_element(v.begin()+3,v.end())<<endl; //skip first three elements

    cout<<accumulate(v.begin(),v.end(),0)<<endl;

    cout<<count(v.begin(),v.end(),4)<<endl;
    
    cout<<*(find(v.begin(),v.end(),6)); // find() function return iterator

    reverse(v.begin()+3,v.end());
    for(int x:v)
        cout<<x<<" ";
    cout<<'\n';

    string str="abcd";
    reverse(str.begin(),str.end());

    vector<int>arr={4,2,8};

    cout<<all_of(arr.begin(),arr.end(),
    [](int x){ return x%2==0;})<<endl; // return true if all elements are divisible by 2

    cout<<any_of(arr.begin(),arr.end(),
    [](int x){ return x<0;})<<endl;

    cout<<none_of(arr.begin(),arr.end(),
    [](int x){ return x>0;})<<endl; // reverse of all_of()
return 0;
}