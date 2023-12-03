//2951. Find the Peaks
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector<int> ans;
        for(int i=1;i<mountain.size()-1;i++){
            if(mountain[i]>mountain[i-1] && mountain[i]>mountain[i+1])
                ans.push_back(i);
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> mountain{1,4,3,8,5};
    vector<int> ans;
    ans = s.findPeaks(mountain);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}