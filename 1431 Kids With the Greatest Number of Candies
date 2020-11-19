class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    
        int max = 0;
        vector<bool> maxCandies; 
        
        // Find Max Candies
        for(int i = 0; i < candies.size(); i++)
        {
            if(candies[i] > max)
                max = candies[i];
        }
        
        // Determine if possible to have Max Candies
        for(int i = 0; i < candies.size(); i++)
        {
            if((candies[i] + extraCandies) >= max)
                maxCandies.push_back(true);
            else
                maxCandies.push_back(false);
        }
             
        return maxCandies;    
    }
};
