#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"Enter the digit a, b, c : ";
    int a,b,c;
    cin>>a>>b>>c;

    //To Normal Digit 
   // Formula: ans = (ans*10)+digit
    int ans=0;
     ans = (ans*10)+a;
     ans = (ans*10)+b;
     ans = (ans*10)+c;

     cout<<ans<<endl;

     // To Reverse Digit 
    //Formula: ans = (digit*(10^i)+ans
    ans = 0;
    ans = a*pow(10,0)+ans;
    ans = b*pow(10,1)+ans;
    ans = c*pow(10,2)+ans;

    cout<<ans;
    return 0;
}