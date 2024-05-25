//100309. Find the XOR of Numbers Which Appear Twice

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> occurrences;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == x) {
                occurrences.push_back(i);
            }
        }
        vector<int> result;
        for (int i=0;i<queries.size();i++) {
            if (queries[i] > occurrences.size()) {
                result.push_back(-1);
            } else {
                result.push_back(occurrences[queries[i]-1]);
            }
        }
        return result;
    }
};