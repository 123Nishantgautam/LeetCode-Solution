class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int count = 0;
        while(i<n){
            int j = i + 1;
            if(i == n-1){
                j = 0;
            }

            if(nums[i] > nums[j]){
                count++;
            }
            i++;
        }
        if(count <= 1){
            return true;
        }
        else{
            return false;
        }
    }
};