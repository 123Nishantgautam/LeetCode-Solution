#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        // Initialize a variable to keep track of the cumulative sum
        int sum = 0;
        
        // Iterate through the input array and update each element with the running sum
        for(int i=0; i<nums.size(); i++){
            sum = sum + nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};