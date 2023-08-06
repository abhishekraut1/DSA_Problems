#include<bits/stdc++.h>
using namespace std;
// TC = O(2^n)

// place n disks from A to C
void towerOfHanoi(int n,char A,char B,char C){
    if(n==1){
        cout<<"move 1 from "<<A<<" to "<<C<<endl;
        return;
    }
    towerOfHanoi(n-1,A,C,B);
    cout<<"move "<<n<<" from "<<A<<" to "<<C<<endl;
    towerOfHanoi(n-1,B,A,C);
}
int main() {
    int n; cin>>n;
    towerOfHanoi(n,'A','B','C');
return 0;
}