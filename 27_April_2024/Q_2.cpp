//3128. Right Triangles

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        long long count = 0;

        vector<int> rowSum(rows,0);
        vector<int> colSum(cols,0);
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                rowSum[i] += grid[i][j];
                colSum[j] += grid[i][j];
            }
        }
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j] == 1){
                    count += (rowSum[i] - 1)*(colSum[j] - 1);
                }
            }
        }

        return count;
    }
    
    
    
    
// TIME LIMIT EXCEEDED
    
//     int rows = grid.size();
//     int cols = grid[0].size();
//     int count = 0;
    
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             if (grid[i][j] == 1) {
    
//                 // Check for other 1s in the same row
//                 for (int k = 0; k < cols; ++k) {
//                     if (k != j && grid[i][k] == 1) {
    
//                         // Check for 1s in the same column
//                         for (int l = 0; l < rows; ++l) {
//                             if (l != i && grid[l][j] == 1) {
//                                 count++;
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
    
//     return count;
};