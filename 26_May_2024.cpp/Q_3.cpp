//3164. Find the Number of Good Pairs II

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        unordered_map<int, int> mpp;
        long long ans = 0;

        for (int i=0;i<nums2.size();i++) {
            mpp[nums2[i]*k]++;
        }
        
        for(auto num : nums1){
            for(int i=1;i<=sqrt(num);i++){
                if(num % i == 0){
                    int complement = num/i;
                    
                    if(mpp.count(i)){
                        ans += mpp[i];
                    }
                    if(complement != i && mpp.count(complement)){
                        ans += mpp[complement];
                    }
                }
            }
        }

        return ans;
    }
};