#include<bits/stdc++.h>
using namespace std;
// generate subsets using bitmask
// TC = n * 2^n
int main() {
    string s = "abc";
    int n = s.length();
    int subset_ct = (1<<n) - 1;
    cout<<subset_ct<<endl;

    for(int i=0;i<=subset_ct;i++){
        string temp;
        for(int j=0;j<n;j++){
            if(i & 1<<j)temp += s[j];
        }
        cout<<temp<<endl;
    }
return 0;
}