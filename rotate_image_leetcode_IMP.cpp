#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        // making transpose of n*n matrix by swapping
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[i].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        // swapping jth element for each row n-1-j th element
        
        for(int i=0;i<matrix.size();i++){
            int n = matrix[i].size();
            for(int j=0;j<n/2;j++){
                swap(matrix[i][j],matrix[i][n-1-j]);
            }
        }
        
    }
    
int main() {

return 0;
}

// void rotate(vector<vector<int>>& matrix) {
//         int row = matrix.size();
//         int col = matrix[0].size();
        
//         int startingRow = 0;
//         int endingRow = row-1;
//         int startingCol = 0;
//         int endingCol = col-1;
        
//         int a[row];
//         int b[col];
//         int total = row*col;
//         int count = 0;
        
//         while(count < total){
//             startingCol++;
//             //copying starting row
//             for(int i=startingCol;count < total && i<=endingCol;i++){
//                 a[i] = matrix[startingRow][i];
//                 count++;
//             }
//             startingRow++;
            
//             //copying starting row to ending col
//             for(int i=startingRow;count < total && i<=endingRow;i++){
//                 b[i] = matrix[i][endingCol];
//                 matrix[i][endingCol] = a[i];
//                 count++;
//             }
//             endingCol--;
            
//             //copying ending col to ending row
//             for(int i=endingCol;count < total && i<=startingCol;i--){
//                 a[i] = matrix[endingRow][i];
//                 matrix[endingRow][i] = b[i];
//                 count++;
//             }
//             endingRow--;
//             startingRow--;
            
//             //copying ending row to staring col
//             for(int i=endingRow;count < total && i<=startingRow;i--){
//                 a[i] = matrix[i][startingCol];
//                 matrix[startingRow][i] = b[i];
//                 count++;
//             }
//             startingCol++;
            
//             //copying starting col to starting row
//             for(int i=startingCol;count < total && i<=endingCol;i++){
//                 matrix[startingRow][i] = a[i];
//                 count++;
//             }
//             startingRow++;
//         }