//3028. Ant on the Boundary
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int sum = 0;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum == 0){
               cnt++;
            }
            else{
                continue;
            }
        }
        return cnt;
    }
};

int main()
{
    Solution s;
    vector<int> nums{3,2,-3,-4};
    cout<<s.returnToBoundaryCount(nums);
    return 0;
}