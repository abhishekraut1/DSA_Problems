#include<iostream>
#include<math.h>
using namespace std;
int main(){

    //Complement means replace last binary digits 1 by 0 AND 0 by 1
    cout<<"Enter the integer number : ";
    int n;
    cin>>n;
    int m=n;
        int bitMask = 0;
        //edge case
        if(n==0){
            cout<<1<<endl; //comlement of 1 is 0.
            return 0;
        }
        
        while(m!=0){
            bitMask = (bitMask<<1) | 1;
            m = m>>1;
        }
        int ans = (~n) & bitMask;
        cout<<ans<<endl;

        return 0;
}