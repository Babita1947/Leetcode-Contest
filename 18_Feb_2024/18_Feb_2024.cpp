//100212. Count Prefix and Suffix Pairs I

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrefixAndSuffix(string str1, string str2) {
        int str2_len = str2.length();
        int str1_len = str1.length();
        if (str2.substr(0, str1_len) == str1 && str2.substr(str2_len - str1_len, str1_len) == str1)
                return true;
    
        return false;
    }
    
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) { 
                if (isPrefixAndSuffix(words[i], words[j]))
                    count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    vector<string> words{"a","aba","ababa","aa"};
    cout<<s.countPrefixSuffixPairs(words);
    return 0;
}