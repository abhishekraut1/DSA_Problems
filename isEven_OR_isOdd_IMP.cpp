#include<iostream>
#include<math.h>
using namespace std;
int main(){
    cout<<"Enter the integer number : ";
    int n;
    cin>>n;

    if(n&1){ //NOTE if n&1==1 then it is odd no.
    //because if last bit of n is set bit then it is odd no.
        cout<<"number is odd";
    }else{
        cout<<"number is even";
    }

    if((n^1) == n-1){ 
    //because if last bit of n is set bit then it will decrease n by 1
        cout<<"number is odd";
    }else{
        cout<<"number is even";
    }
     return 0;
}