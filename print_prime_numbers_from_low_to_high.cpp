#include<iostream>
using namespace std;
bool isPrime(int n){
     for(int j=2;j*j<n;j++){
            if(n%j == 0){
                return 0;
            }
        }
    return 1;
}
int main() {
    int low = 12;
    int high = 29;
    for(int i=low;i<high;i++){ // Time Complexity = O(n*√n)
        if(isPrime(i)){
        cout<<i<<" ";
        }
    }
return 0;
}