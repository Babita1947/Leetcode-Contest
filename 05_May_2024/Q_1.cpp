//3136. Valid Word

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) {
            return false;
        }
        
        bool hasVowel = false;
        bool hasConsonant = false;
        
        for (char c : word) {
            if (isalpha(c)) {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                    hasVowel = true;
                } else {
                    hasConsonant = true;
                }
            } else if (!isdigit(c)) {
                return false;
            }
        }
        
        return hasVowel && hasConsonant;
    }
};

