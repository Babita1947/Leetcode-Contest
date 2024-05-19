//3152. Special Array II

#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> prefixSpecial(n, 0);
        
        for (int i = 0; i < n - 1; i++) {
            if ((nums[i] % 2) != (nums[i + 1] % 2)) {
                prefixSpecial[i + 1] = 1;
            }
        }

        for (int i = 1; i < n; i++) {
            prefixSpecial[i] += prefixSpecial[i - 1];
        }

        vector<bool> ans;
        for (int i=0;i<queries.size();i++) {
            int start = queries[i][0];
            int end = queries[i][1];
            

            if (start == end) {
                ans.push_back(true);
                continue;
            }

            int specialPairsCount = prefixSpecial[end] - prefixSpecial[start];
            
            ans.push_back(specialPairsCount == (end - start));
        }
        
        return ans;
    }
};

