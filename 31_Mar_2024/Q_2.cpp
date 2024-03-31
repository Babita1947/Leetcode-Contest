//3100. Water Bottles II

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
    
        // initially
        int BottleDrunks = 0;
        int EmptyBottles = 0;
        
        while(numBottles || EmptyBottles >= numExchange){
            if(EmptyBottles >= numExchange){
                EmptyBottles -= numExchange;
                numExchange++;
                numBottles++;
            }
            else{
                EmptyBottles += numBottles;
                BottleDrunks += numBottles;
                numBottles = 0;
            }
        }
        return BottleDrunks;
        
    }
};