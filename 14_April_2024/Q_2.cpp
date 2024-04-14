//3115. Maximum Prime Difference

#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;

        for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0)
                return false;
        }

        return true;
    }
public:
    int maximumPrimeDifference(vector<int>& nums) {
       vector<int> primeIndex;

       for(int i=0;i<nums.size();i++){
           if(isPrime(nums[i])){
               primeIndex.push_back(i);
           }
       }
        
        if (primeIndex.empty()) {
            return 0;
        } 
        else {
            int maxIndex = *max_element(primeIndex.begin(), primeIndex.end());
            int minIndex = *min_element(primeIndex.begin(), primeIndex.end());
            int difference = maxIndex - minIndex;
            return difference;
        }

    }
};