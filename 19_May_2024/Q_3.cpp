//3153. Sum of Digit Differences of All Pairs

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> digit(10, vector<int>(10, 0));

        int length = to_string(nums[0]).size();
        for (int i=0;i<n;i++) {
            string str_num = to_string(nums[i]);
            for (int j = 0; j < length; j++) {
                int digit_val = str_num[j] - '0';
                digit[j][digit_val]++;
            }
        }

        long long ans = 0;
        for (int i = 0; i < length; ++i) {
            for (int j = 0; j < 10; ++j) {
                int cnt1 = digit[i][j];
                int cnt2 = n - cnt1;
                ans += cnt1 * cnt2;
            }
        }

        return ans / 2;
    }
};