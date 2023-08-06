#include<iostream>
using namespace std;

string removeSpecialCharacter(string &s){
    int j = 0;
    for (int i = 0; i < s.length(); i++) {
         
        // Store only valid characters
        if ((s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >='a' && s[i] <= 'z' || s[i]>='0' && s[i]<='9'))
        {
            s[j] = s[i];
            j++;
        }
    }
    return s.substr(0, j);
}

int main() {
    cout<<"Enter the string : ";
    string s;
    cin>>s;

    cout<<removeSpecialCharacter(s);
return 0;
}