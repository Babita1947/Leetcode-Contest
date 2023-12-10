//10032. Double Modular Exponentiation
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int> ans;
        
        for (int i = 0; i < variables.size(); ++i) {
            int a = variables[i][0];
            int b = variables[i][1];
            int c = variables[i][2];
            int d = variables[i][3];

            int res = power(a,b,10);
            int res2 = power(res,c,d);
            if(res2 == target)
                ans.push_back(i);
        }

        return ans;
    }

private:
    int power(int num, int pw, int mod) {
        if(pw == 0)
            return 1;
        if(pw % 2 == 0){
            int temp = power((num*num) % mod,pw/2,mod);
            return (temp % mod);
        }
        else{
            int temp = power((num*num) % mod,pw/2,mod);
            return ((temp % mod) * num) % mod;
        }
    }
};

int main()
{
    Solution s;
    vector<vector<int>>variables{{2,3,3,10},{3,3,3,1},{6,1,1,4}};
    int target = 2;
    vector<int> ans;
    ans = s.getGoodIndices(variables,target);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}