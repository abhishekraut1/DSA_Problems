#include<bits/stdc++.h>
#define nl endl
using namespace std;
void printFrequency(string &s){
    int count[26]={0};
    
    for(int i=0;i<s.length();i++)
        count[s[i]-'a']++;
    
    for(int i=0;i<26;i++)
        if(count[i]>0)
            cout<<(char)('a'+i)<<" "<<count[i]<<endl;
}
int main() {
    string s="geeksforgeeks";
    printFrequency(s);
return 0;
}