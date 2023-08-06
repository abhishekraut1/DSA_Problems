#include<bits/stdc++.h>
#define nl endl
using namespace std;
int findElement(vector<int>& L , vector<int>& R ,int n){
    vector<int> arr(1000); // Ranges are not greater than 1000
    for(int i=0;i<n;i++){
       	arr[L[i]] += 1;
        arr[R[i]+1] -= 1;;
    }
	int maxm = arr[0],res=0;
	for(int i=1;i<1000;i++){
		arr[i] += arr[i-1];
		if(arr[i] > maxm){
			maxm = arr[i];
			res = i;
		}
	}
	return res;
}
int main() {
    vector<int>L = {1,2,3};
    vector<int>R = {3,5,7};
	cout<<findElement(L,R,3)<<nl;
return 0;
}