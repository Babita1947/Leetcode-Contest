//3099. Harshad Number

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int newX = x;
        int sum = 0;
        
        while(newX){
            int mod;
            mod = newX % 10;
            newX = newX / 10;
            sum += mod;
        }
        if(x % sum == 0)
            return sum;
        return -1;
    }
};