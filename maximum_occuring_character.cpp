#include<iostream>
using namespace std;
// For small characters only
char getMaxOccurCharacter(string &s){
    int hsh[26] = {0}; // IMP to initialize by zero
    bool smallChar = false;
    for(int i=0;i<s.length();i++){
        hsh[s[i] - 'a']++; 
    }

    int maxi = -1;
    int ans = 0;

    for(int i=0;i<26;i++){
        if(hsh[i] > maxi){
            ans = i;
            maxi = hsh[i];
        }
    }

    return 'a'+ans;
}
int main() {
    string s;
    cin>>s;
    
    cout<<"Max occurence of :"<<getMaxOccurCharacter(s);
return 0;
}