void sortColors(vector<int>& nums) {
    int count0 = 0, count1 = 0, count2 = 0;

    // count the number of 0s, 1s, and 2s in the array
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0) count0++;
        else if(nums[i] == 1) count1++;
        else count2++;
    }

    int i = 0;
    // overwrite the original array with the counted number of 0s, 1s, and 2s
    while(count0--) nums[i++] = 0;
    while(count1--) nums[i++] = 1;
    while(count2--) nums[i++] = 2;

    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
}