//10035. Maximum Area of Longest Diagonal Rectangle

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxi=0;
        int area = 0;
        for(int i=0;i<dimensions.size();i++){
            int length = dimensions[i][0];
            int width = dimensions[i][1];
            
            double Diagonal_length = sqrt(length*length + width*width);

            if(Diagonal_length > maxi){
                maxi = Diagonal_length;
                area = length * width;
            }
            else if(Diagonal_length == maxi)
                area = max(area,length*width);
         }
        return area;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> dimensions{{9,3},{8,6}};
    cout<<s.areaOfMaxDiagonal(dimensions);
    return 0;
}