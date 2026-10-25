class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> nums;
        int i=1;
        int n = arr.size()-1;

        while(nums.size() < k){
            if(find(arr.begin(),arr.end(),i) == arr.end()){
                nums.push_back(i);
            } 
            i++;
        }
        return nums[k-1];
    }
};