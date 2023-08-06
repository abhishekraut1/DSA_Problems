#include<bits/stdc++.h>
using namespace std;
// TC = O(n)
// Auxilliary Space = O(n)
bool checkPalindrome(string str,int s,int e){
    if(s>=e) return true;

    if(str[s]==str[e])
        return checkPalindrome(str,s+1,e-1);
    else
        return false;
}
int main() {
    string str = "abiiba";
    cout<<checkPalindrome(str,0,str.length()-1);
return 0;
}