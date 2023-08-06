#include<bits/stdc++.h>
using namespace std;
// TC = Θ(2^n * n)
void powerSet(string str){
    int n = str.length();
    int powerSize = pow(2,n);// no of elements in power set
    for(int cnt=0;cnt<powerSize;cnt++){
        for(int j=0;j<n;j++){
            if((cnt & (1<<j)) != 0)
                cout<<str[j];
        }
        cout<<endl;
    }
}
int main() {
    string str = "abc";
    powerSet(str);
return 0;
}