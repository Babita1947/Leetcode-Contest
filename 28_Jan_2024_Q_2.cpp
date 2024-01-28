//3020. Find the Maximum Number of Elements in Subset

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<double,int> mpp;
        //count elements 
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        
        int ans = 1;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i] == 1 && mpp[nums[i]] >= 2){
               ans = max(ans,mpp[nums[i]] - (mpp[nums[i]] % 2 == 0));
               continue;
            }

            double sqroot = sqrt(nums[i]);
            int maxi = 1;
            while(mpp[sqroot] >= 2){
                maxi += 2;
                sqroot = sqrt(sqroot);
            }
            ans = max(ans,maxi);
        }
        
        for(int i=0;i<nums.size();i++){
            
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums{5,4,1,2,2};
    cout<<s.maximumLength(nums);
    return 0;
}