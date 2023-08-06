#include<bits/stdc++.h>
# define nl endl
using namespace std;
int main() {
    string s="Welcome";
    string::iterator it;
    
    for(it=s.begin();it!=s.end();it++){
        cout<<*it;
    }
    cout<<nl;
    string::reverse_iterator rt;

    for(rt=s.rbegin();rt!=s.rend();rt++){
        cout<<*rt;
    }
return 0;
}