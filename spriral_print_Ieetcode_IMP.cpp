#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        vector<int> ans;
        
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = rows-1;
        int endingCol = cols-1;
        
        int count = 0;
        int total = rows*cols;
        while(count < total){
            // print starting row
            for(int i = startingCol; count < total && i<=endingCol; i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            
            // print ending col
            for(int i = startingRow; count < total && i<=endingRow; i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            
            // print ending row
            for(int i = endingCol; count < total && i>=startingCol; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            
            // print starting col
            for(int i = endingRow; count < total && i>=startingRow; i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        
        return ans;
    }

int main() {
    vector<vector<int>> matrix;
    int row;
   cin>>row;
   for(int i=0;i<row;i++){
       int n;
       cin>>n;
       vector<int> temp;
       for(int j=0;j<n;j++){
           int x;
           cin>>x;
           temp.push_back(x);
       }
       matrix.push_back(temp);
   }
    
return 0;
}