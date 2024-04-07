//3105. Longest Strictly Increasing or Strictly Decreasing Subarray

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if(nums.size() == 1)
            return 1;

        int inc_len = 1;
        int dec_len = 1;
        int maxi = 1;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i] > nums[i-1]){
                inc_len += 1;
                dec_len = 1;
            }
            else if(nums[i] < nums[i-1]){
                inc_len = 1;
                dec_len += 1;
            }
            else{
                inc_len = 1;
                dec_len = 1;
            }
            
            maxi = max(maxi, max(inc_len, dec_len));
        }
        
        return maxi;
    }
};

int main(){
    Solution s;
    vector<int> nums{1,4,3,3,2};
    cout<<s.longestMonotonicSubarray(nums);
    return 0;
}