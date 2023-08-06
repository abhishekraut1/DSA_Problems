#include<bits/stdc++.h>
using namespace std;
// print factors of a numbers

// TC = O(sqrt(N))
    void print_divisors(int n) {
        
        set<int>ans;
        for(int i=1;i*i<=n;i++){
            if(n%i == 0){
                ans.insert(i);
                ans.insert(n/i);
            }
        }
        
        for(int x:ans)
        cout<<x<<" ";
    }

// print prime factors of a numbers
// TC = O(sqrt(N))
    void printPrimeFactors(int n){
        vector<int>fact;

        for(int i=2;i*i<=n;i++){
            bool fl = 0;
            while(n%i == 0){
                n /= i;
                fl = 1;
            }
            if(fl)
            fact.push_back(i);
        }
        
        if(n>2){
            fact.push_back(n);
        }

        for(int x:fact)
        cout<<x<<" ";
        
    }
int main() {
    print_divisors(100);
    cout<<endl;
    printPrimeFactors(91);
return 0;
}