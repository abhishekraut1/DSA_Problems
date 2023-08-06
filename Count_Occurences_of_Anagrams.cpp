#include <bits/stdc++.h>
using namespace std;
    const int CHAR=256;
    int isAnagram(int cnt1[],int cnt2[]){
        for(int i=0;i<CHAR;i++){
	        if(cnt1[i]!=cnt2[i])
	            return 0;
	    }
        
        return 1;
    }

	int searchAnagram(string &txt,string &pat) {
	    int m=txt.length();
	    int n=pat.length();
	    int cnt1[CHAR]={0};
	    int cnt2[CHAR]={0};
	    
	    
	    for(int i=0;i<n;i++){
	        cnt1[txt[i]-'a']++;
	        cnt2[pat[i]-'a']++;
	    }
	    
	    int res=0;

	    for(int i=n;i<m;i++){
	        res += isAnagram(cnt1,cnt2);
	        cnt1[txt[i]-'a']++;
	        cnt1[txt[i-n]-'a']--;
	    }
	    res += isAnagram(cnt1,cnt2);
	    return res;
	}

int main() {
    string txt="forxxorfxdofr"; string pat="for";
    cout<<searchAnagram(txt,pat);
    return 0;
}