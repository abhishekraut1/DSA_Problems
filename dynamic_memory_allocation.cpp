#include<bits/stdc++.h>
# define nl endl
using namespace std;
int main() {
    int *p=new int[10];
    cout<<sizeof(p)<<nl;
    delete []p;
    
    p=new int[30];
    cout<<sizeof(p)<<endl;
    delete []p;
return 0;
}