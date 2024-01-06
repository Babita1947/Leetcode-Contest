//2981. Find Longest Special Substring That Occurs Thrice I


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to check if a substring is present in the main string at a given index
    bool isPresentInString(string& mainString, string& substring, size_t index) {
        return mainString.substr(index, substring.length()) == substring;
    }
    
    int maximumLength(string s) {
        // Vector to store special substrings
        vector<string> special;
        int i = 0;

        // Make Substrings
        while(i < s.size()){
            int j = i + 1;
            while(s[i] == s[j]){
                j++;
            }
            string temp = s.substr(i, j - i);
            special.push_back(temp);
            i++;
        }

        // Variable to store the maximum length of repeating substring
        int ans = -1;

        // Iterate through the special substrings
        for(int i = 0; i < special.size(); i++){
            // Counter to track the occurrences of the current substring in the main string
            int cnt = 0;
            
            // Current special substring
            string specialTemp = special[i];

            // Iterate through the main string to count occurrences
            for(int j = 0; j < s.size(); j++){
                if(isPresentInString(s, specialTemp, j) == true){
                    cnt++;
                }
            }

            // If the substring occurs at least 3 times, update the maximum length
            if(cnt >= 3){
                int len = specialTemp.length();
                ans = max(ans, len);
            }
        }
        return ans;
    }
};
