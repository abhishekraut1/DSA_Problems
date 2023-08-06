#include<bits/stdc++.h>
using namespace std;

// tail recursion
void print1(int n){
    // base case
    if(n==0)
        return;
    
    //processing
    cout<<n<<" ";

    //recursive relation
    print1(n-1);
}

// head recursion
void print2(int n){
    // base case
    if(n==0)
        return;
    
    //recursive relation
    print2(n-1);

    //processing
    cout<<n<<" ";
    
}

int main() {
    int n;
    cin>>n;
    print1(n);
    cout<<endl;
    print2(n);
return 0;
}