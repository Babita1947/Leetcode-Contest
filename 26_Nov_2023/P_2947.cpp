//2947. Count Beautiful Substrings I
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int result = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            int vowels = 0, consonants = 0;

            for (int j = i; j < n; j++) {
                if (s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                   vowels++;
                else
                    consonants++;

                if (vowels == consonants && (vowels * consonants) % k == 0)
                    result++;
            }
        }
        return result;
    }
};

int main()
{
    Solution s;
    string s1="abba";
    int k=1;
    cout<<s.beautifulSubstrings(s1,k);
    return 0;
}