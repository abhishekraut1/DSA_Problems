#include<iostream>
#include<vector>
using namespace std;

    string removeDuplicates(string &s) {
        string ans;
        for(int i=0;i<s.length();i++)
        {
            if(ans.length()==0 || ans.back()!=s[i])
            {
               ans.push_back(s[i]);
               continue; //IMP
            }
            while(ans.length() >0 && ans.back() == s[i])
            {
                ans.pop_back();
            }
        }
        return ans;
    }

int main() {
    string s = "abbaca";

    cout<<removeDuplicates(s);
return 0;
}