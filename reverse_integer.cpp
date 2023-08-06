#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"Enter the integer number : ";
    int n;
    cin>>n;
    int ans = 0;
        while(n!=0){
            int digit = n%10;
            
            if((ans<INT_MIN/10) || (ans>INT_MAX/10)){
                return 0;
            }
            
            ans = ans*10+digit;
            n=n/10; //eleminating last number
        }
        cout<<ans;
        return 0;
}