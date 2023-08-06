#include<bits/stdc++.h>
using namespace std;
// if size of set = n
// then no. of subsets = 2^n
void generateSubset(string &str,string curr="",int i=0){
    if(i==str.length()){
        cout<<curr<<endl; 
        return;
    } 
    // not include
    generateSubset(str,curr,i+1); 
    // include
    generateSubset(str,curr+str[i],i+1);

} 

int main() {
    string str = "abc";
    generateSubset(str);
return 0;
}