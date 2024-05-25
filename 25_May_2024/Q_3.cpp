//100313. Find the Number of Distinct Colors Among the Balls

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> ball_color;
        unordered_map<int, int> color_count;
        int distinct_colors = 0;
        vector<int> result;

        for (auto& query : queries) {
            int ball = query[0];
            int color = query[1];
            
            if (ball_color.count(ball)) {
                int prev_color = ball_color[ball];
                color_count[prev_color]--;
                if (color_count[prev_color] == 0) {
                    distinct_colors--;
                }
            }

            ball_color[ball] = color;
            if (color_count[color]++ == 0) {
                distinct_colors++;
            }

            result.push_back(distinct_colors);
        }

        return result;
    }
};