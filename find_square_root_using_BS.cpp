#include<iostream>
using namespace std;
// Q. square root of an number using Binary Search
long long int getSquareRoot(int n){
    int s = 0;
    int e = n;
    long long int ans;
    long long int mid = s + (e-s)/2;
    while(s <= e){

        long long int square = mid*mid;

        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            s = mid+1; 
        }else {
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double getMorePrecision(int intAns,int precision,int n){
    double factor = 1;
    double ans = intAns;
    
    for(int i=0;i<precision;i++){
        factor = factor/10;

        for(double j=ans;j*j<n;j=j+factor){
            ans = j;
        }
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    int intAns = getSquareRoot(n);
    cout<<intAns<<endl;

    double decimalAns = getMorePrecision(intAns,3,n);
    cout<<decimalAns<<endl;
return 0;
}