//Find the Largest Area of Square Inside Two Rectangles

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
         long n = bottomLeft.size();
         long maxArea = 0;
        
         for(int i=0;i<n;i++){
             for(int j=i+1;j<n;j++){
                 int x1 = max(bottomLeft[i][0],bottomLeft[j][0]);
                 int y1 = max(bottomLeft[i][1],bottomLeft[j][1]);
                 int x2 = min(topRight[i][0],topRight[j][0]);
                 int y2 = min(topRight[i][1],topRight[j][1]);
                 
                 if(x1<x2 && y1<y2){
                     int side = min(x2-x1,y2-y1);
                     maxArea = max(maxArea,(long) side*side);
                 }
             }
         }
        return maxArea;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> bottomLeft{{1,1},{2,2},{3,1}};
    vector<vector<int>> topRight{{3,3},{4,4},{6,6}};

    long long ans = s.largestSquareArea(bottomLeft,topRight);
    cout<<ans;
    return 0;
}