class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++){
            int sqr = nums[i] * nums[i];
            nums[i] = sqr;
        }
        sort(nums.begin(),nums.end());

        return nums;
    }
};