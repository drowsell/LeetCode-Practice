class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = 0;
        
        if(nums.size() == 0)
        {
            return len;
        }
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[len] = nums[i];
                len++;
            }
        }
        return len;
    }
};
