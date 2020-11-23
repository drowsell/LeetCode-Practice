class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string longestPrefix = "";
        string tempPrefix = "";
        
        if (strs.size() == 0)
            return longestPrefix;
        
        int smallestLen = strs[0].length();
        
        // Find the shortest word
        for(int i = 0; i < strs.size(); i++)
        {
            if (strs[i].length() < smallestLen)
                smallestLen = strs[i].length();
        }
        
        // Grab the longest possible prefix
        longestPrefix = strs[0].substr(0,smallestLen);    
        
        // Go through vector checking if all match
        for(int j = 0; j < strs.size()-1; j++)
        {
            for(int k = 0; k <= smallestLen + 1; k++)
            { 
                tempPrefix = strs[j+1].substr(0,smallestLen);
                
                if (tempPrefix == longestPrefix)
                { 
                    break;
                }
                else
                {
                    longestPrefix.pop_back();
                    smallestLen = smallestLen-1;
                }   
                cout << longestPrefix << endl;
            }
        }
        
        return longestPrefix;
    }
};
