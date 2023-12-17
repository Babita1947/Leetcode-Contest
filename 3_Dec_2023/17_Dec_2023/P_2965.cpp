//

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       int n = grid.size();
        vector<int> hash((n*n)+1);
    
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                hash[grid[i][j]]++;
            }
        }
        int a,b;
        for(int i=1;i<hash.size();i++){
            if(hash[i] == 2){
                a=i;
            }
            if(hash[i] == 0)
                b=i;
        }
        return {a,b};
    }
};

int main()
{
    Solution s;
    vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};
    vector<int> ans;
    ans = s.findMissingAndRepeatedValues(grid);
    for(int i=0;i<ans.size();i++)
      cout<<ans[i]<<" ";
    return 0;
}