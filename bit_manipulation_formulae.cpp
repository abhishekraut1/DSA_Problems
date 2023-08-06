#include<bits/stdc++.h>
using namespace std;
int main() {

// if a^b=c then a=b^c and b=a^c
long long a=1,b=2,c=3,d=3221225475;
long long x=((a&b)|c);
cout<<(x^d);

return 0;
}