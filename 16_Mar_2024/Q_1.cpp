//Find the Sum of Encrypted Integers

#include<bits/stdc++.h>
using namespace std;

class Solution {
    int EncryptedInt(int x){
        int maxi = 0;
        int temp;
        int duplicate = x;
        while(x){
            temp = x % 10;
            x = x / 10;
            maxi = max(maxi,temp);
        }
        if(duplicate > 0 && duplicate < 10)
            return maxi;
        else if(duplicate >= 10 && duplicate < 100)
            return maxi*10+maxi;
        else if(duplicate >= 100 && duplicate < 1000)
            return maxi*100+maxi*10+maxi;
        else 
            return 1111;
        return 1;
    }
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            nums[i] = EncryptedInt(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            sum = sum + nums[i];
        }
        return sum;
    }
};

int main()
{
    Solution s;
    vector<int> nums{10,21,31};
    cout<<s.sumOfEncryptedInt(nums);
    return 0;
}