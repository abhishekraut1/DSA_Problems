#include <bits/stdc++.h>
using namespace std;

const int CHAR=256;
bool areAnagram1(string &s1, string &s2) 
{ 
    int n1 = s1.length(); 
    int n2 = s2.length(); 
    if (n1 != n2) 
        return false; 
    
    int count[CHAR]={0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    
    for(int i=0;i<CHAR;i++){
        if(count[i]!=0)return false;
    }
    return true;
} 

bool areAnagram2(string s1, string s2){
    if(s1.length() != s2.length())
        return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    return s1==s2;
}

int main() {
	string s1, s2;
	cin>>s1>>s2;
	
	cout<<areAnagram1(s1, s2)<<endl;
	cout<<areAnagram2(s1, s2)<<endl;
	
	return 0;
}