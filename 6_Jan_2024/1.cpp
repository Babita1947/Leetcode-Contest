//10031. Smallest Missing Integer Greater Than Sequential Prefix Sum
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingInteger(vector<int>& nums) {
         int n = nums.size();

        if (n == 1) {
            return nums[0] + 1;
        }

        int sum_val = nums[0];

        for (int i = 1; i < n; ++i) {
            if (nums[i] == nums[i - 1] + 1) {
                sum_val += nums[i];
            } else {
                break;
            }
        }

        sort(nums.begin(), nums.end());
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            arr.push_back(nums[i]);
        }

        for (int i = 0; i < arr.size(); ++i) {
            if (find(arr.begin(), arr.end(), sum_val) == arr.end()) {
                return sum_val;
            } else {
                sum_val += 1;
            }
        }

        return arr.back() + 1;
    }
};

int main()
{
    Solution s;
    vector<int> nums{1,2,3,2,5};
    cout<<s.missingInteger(nums);
    return 0;
}