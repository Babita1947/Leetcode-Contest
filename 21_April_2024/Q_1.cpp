//3120. Count the Number of Special Characters I

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>mpp1,mpp2,mpp3;
        for(auto it:word){
            if(it>='a')
                mpp1[it]++;
            else
                mpp2[it]++;
        }
        
        int ans=0;
        for(auto it:word){
            if(it>='a')
                mpp3[it]++;
            
            else if(it<='Z')
                mpp2[it]=-1;
                
            //find ans
            if(mpp3[it]==mpp1[it] && mpp2[it-'a'+'A']>0)
                ans++;
            
            
            
        }
        
        return ans;
    }
};

