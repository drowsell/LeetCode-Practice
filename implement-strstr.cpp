class Solution {
public:
    int strStr(string haystack, string needle) {
        
        // Exceptions
        if(needle.length() == 0)
        {
            return 0;
        }
        else if(needle.length() > haystack.length() || haystack.length() == 0)
        {
            return -1;
        }
        else if(haystack == needle)
        {
            return 0;
        }
        
        for(int i = 0; i < haystack.length()-needle.length()+1; i++)
        {
            if(haystack.substr(i,needle.length()) == needle)
            {
                return i;
            }
        }
        return -1;
    }
};
