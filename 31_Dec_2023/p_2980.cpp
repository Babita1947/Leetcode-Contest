//2980. Check if Bitwise OR Has Trailing Zeros
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                int result = nums[i] | nums[j];
                if ((result & 1) == 0) {
                    return true;
                }
            }
        }
        return false;
    }
};