#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //Decimal to Binary

    cout<<"Enter the integer number : ";
    int n;
    cin>>n;
    int ans = 0;
    int i=0;
    while(n!=0){
//This code to store ans in 'integer'
    // To Reverse Digit 
    //Formula: ans = (digit*(10^i)+ans 
    
        int bit = n&1;
        ans = bit*pow(10,i)+ans;

        n=n>>1; //dividing by 2 to int n
        i++;
    }
    cout<<ans<<endl;

    //Binary to Decimal

    cout<<"Enter the binary number : ";
    cin>>n;
    ans = 0;
    i=0;
    while(n!=0){
    int digit = n%10;
    if(digit==1){
        ans = ans + pow(2,i);
    }
    n = n/10;
    i++;
    }
    cout<<ans<<endl;
    return 0;
}