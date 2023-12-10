//10031. Count Tested Devices After Test Operations
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        int count = 0;
        int n = batteryPercentages.size();
        for(int i=0;i<n;i++)
        {
            if(batteryPercentages[i] > 0)
            {
                count++;
                for(int j=i+1;j<n;j++)
                {
                    if(batteryPercentages[j] > 0)
                        batteryPercentages[j] -= 1;
                    else
                        continue;
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    vector<int> batteryPercentages{1,1,2,1,3};
    cout<<s.countTestedDevices(batteryPercentages);
    return 0;
}