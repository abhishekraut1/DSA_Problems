#include<bits/stdc++.h>
using namespace std;
int log3(int n){
    if(n<3) return 0;
    return 1+log3(n/3);
}
int main() {
    int a = 1893;
    cout<<log3(a);
return 0;
}