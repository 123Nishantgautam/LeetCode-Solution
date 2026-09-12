class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       
        int left = 0;
        int zeroCount = 0;
        int maxLenght = 0;

        for(int right = 0; right < nums.size(); right++){
            
            // if we encounter a zero, we increment the zeroCount
            if(nums[right] == 0){
                zeroCount++;
            }
            
            // if the zeroCount exceeds k, we need to shrink the window from the left until the zeroCount is less then or equal to k
            while(zeroCount > k){
                if(nums[left] == 0){
                    zeroCount--;
                }
                left++;
            }

            // calculate the current length of the window and update maxLenght if it's greater than the previous maxLenght 
            int currentLenght = right - left + 1;

            maxLenght = max(maxLenght, currentLenght);
        }
        return maxLenght;
    }
};