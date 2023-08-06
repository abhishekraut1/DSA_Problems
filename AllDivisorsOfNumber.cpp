#include<bits/stdc++.h>
using namespace std;
// TC = √n
    void printAllDivisors2(int n){
		for(int i=1; i*i <= n; i++){
			if(n%i == 0){
				cout<<i<<" ";

				if(i!=n/i) // avoid square root
					cout<<(n/i)<<" ";				
			}
		}
	}
// TC = √n
void printAllDivisors(int n){
    int i=1;
    // print divisors upto √n (not include √n)
    for(i=1;i*i<n;i++){ // i*i<n
        if(n%i==0)
            cout<<i<<" ";
    }

    // print divisors(pairs) from √n to n
    for(;i>=1;i--){ // i>=1
        if(n%i==0)
            cout<<(n/i)<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    printAllDivisors(n);
    printAllDivisors2(n);
return 0;
}