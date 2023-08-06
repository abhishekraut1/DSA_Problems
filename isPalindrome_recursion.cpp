#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string &str,int s,int e){
    // base case
    if(s>e)
        return true;
    // s>e hogaya fir bhi 'false' return nahi hua to true return kar do

    if(str[s] != str[e]) 
        return false;
        
    else return isPalindrome(str,s+1,e-1); // OR direct write ' isPalindrome(str,s+1,e-1); '
     
}
int main() {
    string str;
    cin>>str;
    
    if(isPalindrome(str,0,str.length()-1))
        cout<<"It is Palindrome";
    else
        cout<<"It is not a Palindrome";
return 0;
}