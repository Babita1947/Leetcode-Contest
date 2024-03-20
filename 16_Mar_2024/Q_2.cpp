//3080. Mark Elements on Array by Performing Queries

#include<bits/stdc++.h>
using namespace std;

// class Solution {
//     int minimum_Index(vector<int> &nums){
//         int n = nums.size();
//         int minIndex = -1;
//         int minVal = INT_MAX;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i] != -1 && nums[i] < minVal){
//                 minVal = nums[i];
//                 minIndex = i;
//             }
//         }
//         return minIndex;
//     }
// public:
//     vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
//         vector<long long> ans;
//         int sum = 0;

//         for(auto it:nums)
//            sum += it;
        
//         for(int i=0;i<queries.size();i++){
//             if(nums[queries[i][0]] != -1){
//                 sum -= nums[queries[i][0]];
//                 nums[queries[i][0]] = -1;
//             }
//             while(queries[i][1]){
//                 int  minIndex = minimum_Index(nums);
                
//                 if(minIndex != -1 && nums[minIndex] != -1){
//                     sum -= nums[minIndex];
//                     nums[minIndex] = -1;
//                 }
//                 queries[i][1]--;
//             }
//             ans.push_back(sum);
//         }
//         return ans;
//     }
// };


class Solution {
    
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<long long> ans;
        long long sum = 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<nums.size();i++){
           pq.push({nums[i],i});
           sum += nums[i];
        }
           
        for(int i=0;i<queries.size();i++){
            if(nums[queries[i][0]] != -1){
                sum -= nums[queries[i][0]];
                nums[queries[i][0]] = -1;
            }
            while(queries[i][1] && !pq.empty()){
                pair<int,int> min_element = pq.top();
                pq.pop();
                if(nums[min_element.second] != -1){
                    sum -= nums[min_element.second];
                    nums[min_element.second] = -1;
                    queries[i][1]--;
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> nums{1,2,2,1,2,3,1};
    vector<vector<int>> queries{{1,2},{3,3},{4,2}};
    vector<long long> ans;
    ans = s.unmarkedSumArray(nums,queries);
    for(auto it:ans)
      cout<<it<<" ";
}