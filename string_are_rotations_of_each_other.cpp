#include <iostream>
#include <string>
using namespace std;

bool areRotations1(string s1,string s2)
    {
        int m=s1.length();
        int n=s2.length();
        if(m!=n)
            return false;
        int j=0;
        for(int i=0;i<s1.length();i++){
            int j=0;
            int k=i;
            while(s1[i%m]==s2[j] && j<n){
                i++;
                j++;
            }
            if(j==n) return true;
            if(j>0) i=k;
        }
        return false;
    }

bool areRotations2(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    string temp = s1 + s1;
    return temp.find(s2) != string::npos; //IMP condition
}

int main() {
    string s1 = "ABCD";
    string s2 = "CDAB";
    cout << areRotations1(s1, s2) << endl;
    cout << areRotations2(s1, s2) << endl;
    return 0;
}
