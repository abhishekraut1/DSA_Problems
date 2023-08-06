#include<iostream>
using namespace std;
    
    void reverseString(string &s){ 
    int start = 0;
    int end = s.length()-1;
    while(start < end){ 
    swap(s[start++],s[end--]);
    }
    }

    string reverseWords(string s) {
        
        string ans;
        int i = 0;
        int n = s.length();
        
        while(i<n){
            while(s[i]==' ' && i<n) i++;

            if(i>=n) break;

            int j = i+1;

            while(s[j]!=' ' && j<n) j++;

            string sub = s.substr(i,j-i);
            reverseString(sub);

            if(ans.length()==0) ans = sub;
            else ans = ans + " " +sub;
           
           i = j+1;
        }
        return ans;
    }

int main() {
    string s = "abcd jkl lko omp";

    cout<<reverseWords(s);

return 0;
}