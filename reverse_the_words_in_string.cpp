#include<iostream>
using namespace std;
    
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

            if(ans.length()==0) ans = sub;
            else ans = sub + " " +ans;
           
           i = j+1;
        }
        return ans;
    }

int main() {
    string s = "abcd jkl lko omp";

    cout<<reverseWords(s);

return 0;
}

//  if(s[i]==' '){
//                 ct++;
//             }else{
//                 ct = 0;
//             }
            
//             if(s[i] == ' '){

//                 if(ct==1){
                    
//                     ans += reverseString(str);
//                     ans += ' ';
                    
//                 }
                
//             }
//             else if(i == s.length()-1){
//                 string str = s.substr(j,i);
//                 ans += reverseString(str);
//             }