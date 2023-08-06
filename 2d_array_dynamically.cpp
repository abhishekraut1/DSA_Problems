#include<bits/stdc++.h>
using namespace std;
int main() {
    int row,col;
    cin>>row>>col;
    //making rows array
    int** arr = new int*[row];
    //making columns array
    for(int i=0;i<col;i++){
        arr[i] = new int[col];
    }
    //taking input 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cin>>arr[i][j];
    }
    }
    cout<<endl;
    //taking output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }

    // release memory --> IMP during using heap memory
    for(int i=0;i<row;i++){
        delete [] arr[i];
    }
    delete []arr;
return 0;
}