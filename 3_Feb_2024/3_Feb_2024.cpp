// Type of Triangle II

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            if (nums[i] + nums[i + 1] > nums[i + 2]) {
                if (nums[i] == nums[i + 1] && nums[i + 1] == nums[i + 2]) {
                    return "equilateral";
                } else if (nums[i] == nums[i + 1] || nums[i + 1] == nums[i + 2] || nums[i] == nums[i + 2]) {
                    return "isosceles";
                } else {
                    return "scalene";
                }
            }
        }
        return "none";
    }
};

int main()
{
    Solution s;
    vector<int> nums{3,3,3};
    string ans ;
    ans = s.triangleType(nums);
    cout<< ans;
    return 0;
}