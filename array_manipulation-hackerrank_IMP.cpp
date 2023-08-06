#include<iostream>
using namespace std;
const int N = 1e7+10;
long long int arr[N];
int main() {
    int n;//no of elements
    int m;// m times
    cin>>n>>m;

    while (m--){
        int a,b,k;
        cin>>a>>b>>k;
        arr[a] += k;
        arr[b+1] -= k;
    }
    // calculating prefix sum
    for(int i=1;i<=n;i++){
    arr[i] += arr[i-1];
    }
    // finding max value
    long long max = -1;
    for(int i=1;i<=n;i++){
         if(arr[i]>max){
         max = arr[i];
    }
    }
    cout<<(max);
    
return 0;
}