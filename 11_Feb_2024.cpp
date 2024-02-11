// Modify the Matrix

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<int> maximum;
        int i,j=0;
        
        while(j<matrix[0].size()){
            int maxi = INT_MIN;
            for(i=0;i<matrix.size();i++){
                maxi = max(matrix[i][j],maxi);
            }
            maximum.push_back(maxi);
            j++;
        }
        
        for(int i=0;i<matrix[0].size();i++){
            for(int j=0;j<matrix.size();j++){
                if(matrix[j][i] == -1){
                    matrix[j][i] = maximum[i];
                }
            }
        }
        
        return matrix;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> matrix{{1,2,-1},{4,-1,6},{7,8,9}};
    vector<vector<int>> ans;
    ans = s.modifiedMatrix(matrix);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}