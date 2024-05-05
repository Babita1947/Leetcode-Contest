//3137. Minimum Number of Operations to Make Word K-Periodic

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        int n = word.size();
        unordered_map<string,int> mpp;
        
        for(int i=0;i<n;i=i+k){
            string str = word.substr(i,k);
            mpp[str]++;
        }
        
        int maxFreq = 0;
        
        for(auto &it: mpp){
            maxFreq = max(maxFreq,it.second);
        }
        
        return (n/k) - maxFreq;
    }
};