#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {

       
        
        int minSum = INT_MAX;
        int currSum = 0;

        for(int i = 0; i < nums.size(); i++){
            int sum = 0;

            for(int j = i; j < nums.size() && j < i + r; j++){
                sum += nums[j];

                int len = j - i + 1;

                if(len >= l && sum > 0){
                    minSum = min(minSum, sum);
                }
            } 
        }
        if(minSum == INT_MAX){
            return -1;
        }
        return minSum;
    }
};