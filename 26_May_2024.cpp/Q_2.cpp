//3163. String Compression III

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int n = word.size();
        int i = 0;
        
        while (i < n) {
            char currChar = word[i];
            int count = 0;

            while (i < n && word[i] == currChar && count < 9) {
                count++;
                i++;
            }
            
            comp += to_string(count) + currChar;
        }
        
        return comp;
    }
};