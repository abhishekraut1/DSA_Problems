#include<iostream>
using namespace std;
// Find the substring from 'l' to 'r' is palindrome or not is yes then print "YES" 
int main() {
    int n;
    cin>>n; //size of string
    string s;
    cin>>s;
    int l,r;
    cin>>l>>r;
    int hsh[26];
    //make all zero
    for(int i=0;i<26;i++){
        hsh[i]=0;
    }
    // make l and r 0-based
    l--; r--;
    for(int i=l;i<=r;i++){ // counting using hashing
        hsh[s[i] - 'a']++;
    }
    // finding odd count
    int oddCt=0;
    for(int i=0;i<26;i++){
        if(hsh[i]%2!=0) oddCt++;
    }
    for(int i=0;i<26;i++){
        cout<<hsh[i]<<endl;
    }
    if(oddCt>1) cout<<"NO\n";
    else cout<<"YES\n";
return 0;
}