#include<bits/stdc++.h>
# define nl endl
using namespace std;
int *fun(){
    int *p = new int[5];// stored in heap memory and heap memory 
    for(int i=0;i<5;i++) //can be globaly used anywhere in code
        p[i]=i*5;
    cout<<p<<nl;
    return p;
}
int main() {
    int *q=fun();
    cout<<q<<nl;
    for(int i=0;i<5;i++)
        cout<<q[i]<<" ";
return 0;
}