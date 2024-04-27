//100215. Number of Changing Keys

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countKeyChanges(string s) {
        int cnt = 0;
        for (int i = 0; i < s.size() - 1; ++i) {
            char char1 = tolower(s[i]);
            char char2 = tolower(s[i + 1]);

            if (char1 != char2) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main()
{
    Solution s;
    string st = "aAbBcC";
    cout<<s.countKeyChanges(st);
    return 0;
}