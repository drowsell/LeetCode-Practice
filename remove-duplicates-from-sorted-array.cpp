class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        // Exceptions
        if(nums.size() == 0)
        {
            return 0;
        }
        
        int len = 1;
        int previous = nums[0];
​
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != previous)
            {
                nums[len] = nums[i];
                previous = nums[len];
                len++;
            }
        }
    return len;
    }  
};
