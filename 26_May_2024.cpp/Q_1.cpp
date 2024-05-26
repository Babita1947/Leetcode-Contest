//3162. Find the Number of Good Pairs I

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int cnt = 0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                int temp = nums2[j] * k;
                if(temp != 0 && nums1[i] % temp == 0)
                   cnt++;
            }
        }
        return cnt;
    }
};