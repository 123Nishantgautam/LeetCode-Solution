#include <bits/stdc++.h>
#include <vector>
using namespace std;


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       
        int n = candies.size();
        vector<bool> result(n,true);
        int maxCandies = 0;

        for(int i=0; i<n; i++){
        
            maxCandies = candies[i] + extraCandies;
        
            for(int j=0; j<n; j++){
            
                if(maxCandies < candies[j]){
                    result[i] = false;
                    break;
                }
            }
        }
        return result;

    } 
};