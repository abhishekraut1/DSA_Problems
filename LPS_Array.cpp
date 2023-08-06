#include<bits/stdc++.h>
using namespace std;
// Longest Proper Prefx Suffix Array

// Naive Approach
// TC=O(n^3)
int longPropPreSuff(string str, int n){
    for(int len=n-1;len>0;len--){
        bool flag=true;
        for(int i=0;i<len;i++)
            if(str[i]!=str[n-len+i])
                flag=false;
        
        if(flag==true)
            return len;
    }
    return 0;
}

void fillLPS1(string str,int lps[]){
    for(int i=0;i<str.length();i++){
        lps[i]=longPropPreSuff(str,i+1);
    }
}

// Efficient Approach
//TC=O(n)
void fillLPS2(string str,int lps[]){
    int n=str.length();
    lps[0]=0;
    int len=0;
    int i=1;
    while(i<n){
        if(str[i]==str[len]){
            len++;
            lps[i]=len;
            i++;
        }else{
            if(len==0){
                lps[i]=0;
                i++;
            }else{
                len=lps[len-1];
            }
        }
    }
}


int main() {
    // string txt1 = "abacabad";int lps[txt1.length()];
    // fillLPS1(txt1,lps);
    // for(int i=0;i<txt1.length();i++){
    //     cout<<lps[i]<<" ";
    // }

    string txt2 = "abacabad";int lps[txt2.length()];
    fillLPS2(txt2,lps);
    for(int i=0;i<txt2.length();i++){
        cout<<lps[i]<<" ";
    }


return 0;
}