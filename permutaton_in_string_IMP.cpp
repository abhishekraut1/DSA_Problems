#include<iostream>
#include<vector>
using namespace std;
// Given two strings s1 and s2, return true 
// if s2 contains a permutation of s1, or false otherwise.
bool checkPermutationInStr(string &s1,string &s2){
    vector<int> s1hash(26,0);
    vector<int> s2hash(26,0);

    if(s1.length() > s2.length()) return false;

    // Making first window
    int left = 0;
    int right = 0;
    while(right<s1.length()){

        s1hash[ s1[right]-'a' ]++;
        s2hash[ s2[right]-'a' ]++;

        right++;
    }
    right--;

    while(right<s2.length()){
        // comapring window everytime
        if(s1hash == s2hash) return true;

        right++;
        //
        if(right != s2.length()){
        s2hash[ s2[right]-'a' ]++;
        }
        //
        s2hash[ s2[left]-'a']--;
        
        left++;
    }
    return false;
}
int main() {
    string s1 = "op";
    string s2 = "eidbaopopo";

    cout<<checkPermutationInStr(s1,s2);

return 0;
}