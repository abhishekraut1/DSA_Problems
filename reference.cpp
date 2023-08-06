#include<bits/stdc++.h>
# define nl endl
using namespace std;
int main() {
    int x=10;
    int &y=x;// reference does not consume any memory
    x++;
    y++;
    cout<<x<<nl;
    cout<<y<<nl;
return 0;
}