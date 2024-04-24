//3114. Latest Time You Can Obtain After Replacing Characters

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string findLatestTime(string s) {
        if(s[0] == '?'){
            if(s[1] == '1' || s[1] == '0')
               s[0] = '1';
            else if(s[1] == '?'){
                s[0] = '1';
                s[1] = '1';
            }
            else{
                s[0] = '0';
            }
        }
       
        if(s[1] == '?'){
            if(s[0] == '1'){
                s[1] = '1';
            }
            else if(s[0] == '0'){
                s[1] = '9';
            }
            else if(s[0] == '?'){
                s[0] = '1';
                s[1] = '1';
            }
        }
        

        if(s[3] == '?'){
            s[3] = '5';
        }

        if(s[4] == '?'){
            s[4] = '9';
        }
        
        return s;
    }
};

int main()
{
    Solution s;
    string str = "0?:5?";
    string ans = s.findLatestTime(str);
    cout<<ans;
    return 0;
}

