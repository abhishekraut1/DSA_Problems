#include<bits/stdc++.h>
using namespace std;
// find if the number is palindrome
bool isPalindrome(int n){
    int temp = n;
    int rev = 0;
    while(temp != 0){
        int ld = temp%10; 
        rev = rev*10+ld;
        temp = temp/10;
    }
    return (rev == n);
}
int main() {
    int n;
    cin>>n;
    cout<<isPalindrome(n);
return 0;
}