class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double sum = 0;

        // calculate the sum of the first k elements
        for(int i=0; i<k; i++){
            sum = sum + nums[i];
        }

        // initialize maxSum with the sum of the first k elements
        double maxSum = sum;

        // slide the window of size k through the array and update the sum and maxSum accordingly.
        for(int i=k; i<nums.size(); i++){
            sum = sum - nums[i-k] + nums[i];

            maxSum = max(maxSum, sum);
        }
        return maxSum/k;
    }
};