#include<bits/stdc++.h>
# define nl endl
using namespace std;
// Template in cpp can take datatype as parameter i.e it stores datatype
template<class T>
    T mx(T x,T y){
        return x>y?x:y;
    }
int main() {
    cout<<mx(2,9)<<nl;
    cout<<mx(5.89,3.99)<<nl;
    cout<<mx(2.99f,1.23f)<<nl;
return 0;
}