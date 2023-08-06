#include<bits/stdc++.h>
using namespace std;
void reverseString(string &str,int s,int e){
    // base case
    if(s>e)
        return;
    
    int temp = str[s];
    str[s] = str[e];
    str[e] = temp;

    reverseString(str,s+1,e-1);
}
int main() {
    string str;
    cin>>str;
    
    reverseString(str,0,str.length()-1);
    cout<<str<<endl;
return 0;
}