//

#include<bits/stdc++.h>
using namespace std;


class Solution {
    
public:
    long long countSubstrings(string s, char c) {
        long long count = 0;
        int c_count = 0;
        
        for (char ch : s) {
            if (ch == c) {
                c_count++;
            }
        }
        
        if (c_count == 0) {
            return 0;
        }
        
        count = (long long)c_count * (c_count + 1) / 2;
        return count;
    }
};
int main()
{
    Solution s;
    string str = "abada";
    char c = 'a';

    cout<<s.countSubstrings(str,c);
    return 0;
}