#include<bits/stdc++.h>
using namespace std;
// How many numbers between 1 and 100 which are divisible by 5 or 7
int divisible(int n,int a,int b){
    int c1 = n/a;
    int c2 = n/b;

    int c3 = n/(a*b);
    
    return c1+c2-c3;
}
int main() {
    cout<<divisible(40,5,7);
return 0;
}