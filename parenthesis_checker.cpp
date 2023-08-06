#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        if(x.length()%2!=0) return false;
        stack<char>st;
        for(int i=0;i<x.length();i++){
            if (x[i] == '(' || x[i] == '[' || x[i] == '{') {
            st.push(x[i]);
            }else{
            if(st.empty()){
                    return false;
            } else if (x[i] == ')' && st.top() != '(') {
                return false;
            } else if (x[i] == ']' && st.top() != '[') {
                return false;
            } else if (x[i] == '}' && st.top() != '{') {
                return false;
            } else {
                st.pop();
            }
            }
        }
        
        return st.empty();
    }

};

int main() {

return 0;
}