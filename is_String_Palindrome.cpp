#include<iostream>
using namespace std;
// String is not case sensetive

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(string str){
    int s = 0;
    int e = str.length()-1;

    while(s<=e){
        if(toLowerCase(str[s]) != toLowerCase(str[e])){ //convert upper case to to lower
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}

int main() {
    cout<<"Enter the string : ";
    string s;
    cin>>s;
    cout<<"String is palindrome : "<<isPalindrome(s);
return 0;
}