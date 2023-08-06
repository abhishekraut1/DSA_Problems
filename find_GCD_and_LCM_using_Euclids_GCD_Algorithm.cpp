#include<bits/stdc++.h>
using namespace std;
// Time Complexity: O(max(a,b))  OR log(n)
// Auxiliary Space: O(max(a,b))
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a != b){
    if(a>b){
        a = a-b;
    }else{
        b = b-a;
    }
    }
    return a;
}

int gcd2(int a,int b){
    if(b == 0)
        return a;
    
    // while(b>0){
    //     int remainder = a%b;
    //     a = b;
    //     b = remainder;
    // }
    // return a;
    return gcd2(b,a%b);   
}

int main() {
    cout<<"Enter a and b :"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"GCD of a and b :"<<endl;
    cout<<gcd(a,b)<<endl;
    cout<<gcd2(a,b)<<endl;

    // LCM(a,b) = a*b / GCD(a,b)
    cout<<"LCM of a and b :"<<endl;
    cout<<(a*b)/gcd(a,b)<<endl;;

    // Minimum Fraction of a/b
    double minFraction = (double) (a/gcd(a,b)) / (double) (b/gcd(a,b));
    cout<<"Minimum Fraction of a/b :"<<endl;
    cout<<minFraction<<endl;

return 0;
}