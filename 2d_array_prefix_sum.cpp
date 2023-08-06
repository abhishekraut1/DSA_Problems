#include<bits/stdc++.h>
using namespace std;
// 2D array Prefix Sum
int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int ps[n][m];
 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    ps[0][0] = arr[0][0];
    for(int i=1;i<m;i++){
        ps[0][i] = ps[0][i-1] + arr[0][i];
    }

    
    for(int i=1;i<n;i++)
        ps[i][0] = ps[i-1][0] + arr[i][0];
    
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            ps[i][j] = arr[i][j] + ps[i-1][j] + ps[i][j-1] - ps[i-1][j-1];
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cout<<ps[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}