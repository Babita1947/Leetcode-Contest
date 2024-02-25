//Split the Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int> mpp;
        
        for(int num: nums){
            mpp[num]++;
        }
        
        for(auto it:mpp){
            if(it.second > 2){
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    vector<int> nums{1,1,2,2,3,4};
    cout<<s.isPossibleToSplit(nums);
    return 0;
}