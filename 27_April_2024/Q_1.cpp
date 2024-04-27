//3127. Make a Square with the Same Color

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        unordered_map<char,int> mpp;
        
        for(int i=0;i<grid.size()-1;i++){
            for(int j=0;j<grid[i].size()-1;j++){
                mpp[grid[i][j]]++;
                mpp[grid[i][j+1]]++;
                mpp[grid[i+1][j]]++;
                mpp[grid[i+1][j+1]]++;
                
                if(mpp['W'] > mpp['B'])
                    return true;
                else if(mpp['W'] < mpp['B'])
                    return true;
                else{
                    mpp.erase('W');
                    mpp.erase('B');
                }
                
            }
        }
        return false;
    }
};