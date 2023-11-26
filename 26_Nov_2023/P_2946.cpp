#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    
    // Helper function for cyclically left shifting a row
    void cyclicallyLeftShift(vector<int>& row, int k) {
        int n = row.size();
        k %= n;

        rotate(row.begin(), row.begin() + k, row.end());
    }

    // Helper function for cyclically right shifting a row
    void cyclicallyRightShift(vector<int>& row, int k) {
        int n = row.size();
        k %= n;

        rotate(row.rbegin(), row.rbegin() + k, row.rend());
    }
    
    void shiftmatrix(vector<vector<int>>& mat, int k, vector<vector<int>>& nums) {
        nums = mat;  // Copy the original matrix

        for (int i = 0; i < mat.size(); i++) {
            if (i % 2 == 0) {
                cyclicallyLeftShift(nums[i], k);
            } else {
                cyclicallyRightShift(nums[i], k);
            }
        }
    }

    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> nums;
        shiftmatrix(mat, k, nums);

        // Check if the modified matrix is equal to the original matrix
        return mat == nums;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> matrix{{1,2,1,2,1,2},{5,5,5,5,5,5},{6,3,6,3,6,3}};
    int k=2;
    bool x=s.areSimilar(matrix,k);
    cout<<x;
    return 0;
}