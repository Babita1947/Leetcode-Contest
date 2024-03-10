//Shortest Uncommon Substring in an Array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> shortestSubstrings(vector<string>& arr) {
        auto generateSubstrings = [](const string& s) {
            vector<string> substrings;
            for (int i = 0; i < s.length(); ++i) {
                for (int j = i + 1; j <= s.length(); ++j) {
                    substrings.push_back(s.substr(i, j - i));
                }
            }
            sort(substrings.begin(), substrings.end(), [](const string& a, const string& b) {
                if (a.length() != b.length()) {
                    return a.length() < b.length();
                }
                return a < b;
            });
            return substrings;
        };
        
        int n = arr.size();
        vector<string> answer(n, "");
        
        for (int i = 0; i < n; ++i) {
            auto all_substrings = generateSubstrings(arr[i]);
            for (const auto& sub : all_substrings) {
                bool unique = true;
                for (int j = 0; j < n; ++j) {
                    if (i != j && arr[j].find(sub) != string::npos) {
                        unique = false;
                        break;
                    }
                }
                if (unique) {
                    answer[i] = sub;
                    break;
                }
            }
        }
        return answer;
    }
};