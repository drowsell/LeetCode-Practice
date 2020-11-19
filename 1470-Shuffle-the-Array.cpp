class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> output;
        
        int halfSize = nums.size() /2;
        
        for(int i = 0; i < halfSize; i++)
        {
            output.push_back(nums[i]);
            output.push_back(nums[halfSize + i]); 
        }
        
        return output;
    }
};
