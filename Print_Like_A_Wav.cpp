#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int nCols)
{
    //Write your code here
    vector<int> ans;
    for(int col=0;col<nCols;col++){

        if(1&col){ // odd bottom -> top
            for(int row=nRows-1;row>=0;row--){
            ans.push_back(arr[row][col]);
            }
        } else{ //even
            for(int row=0;row<nRows;row++){
            ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

int main() {
return 0;
}