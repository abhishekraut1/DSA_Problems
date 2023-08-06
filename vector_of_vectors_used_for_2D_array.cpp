#include<bits/stdc++.h>
#define nl endl
using namespace std;
int main() {
    // rows and columns both are dynamic.
    int m=3,n=2;
    vector<vector<int>> arr;

    for(int i=0;i<m;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            temp.push_back(10);
        }
        arr.push_back(temp);
    }

    for(int i = 0; i < m; i++){
	    for(int j = 0; j < n; j++){
		cout << arr[i][j] << " ";
	}}
return 0;
}