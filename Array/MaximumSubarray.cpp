class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        //starts with 1st element of the array becouse we need to consider the case when the array has only 1 element
        int maxSum = nums[0];
        int currentSum = nums[0];
        
        for(int i = 1; i<nums.size(); i++){

            // if currentSum + nums[i] is less then nums[i] then we will start a new subarray from nums[i] otherwise we will continue with the current subarray 
            currentSum = max(nums[i], currentSum + nums[i]);

            // update maxSum if currentSum is greater than maxSum
            maxSum = max(maxSum, currentSum);
        }
        return maxSum;
    }
};