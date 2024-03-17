// Existence of a Substring in a String and Its Reverse

#include<bits/stdc++.h>
using namespace std;

class Solution {
    
public:
    bool isSubstringPresent(string s) {
        vector<string> v;
        for(int i=0;i<s.size()-1;i++){
            string sub = s.substr(i,2);
            v.push_back(sub);
        }
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size()-1;i++){
            for(int j=0;j<v.size();j++){
                if(v[j] == s.substr(i,2))
                   return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    string str = "leetcode";
    cout<<s.isSubstringPresent(str);

    return 0;
}