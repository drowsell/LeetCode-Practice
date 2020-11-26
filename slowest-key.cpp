class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
     
        int longestPressIndex = 0;
        int longestPressTime = releaseTimes[0];
        
     for(int i = 1; i < releaseTimes.size(); i++)
     {
         int currentPressTime = releaseTimes[i] - releaseTimes[i-1];
         if (currentPressTime == longestPressTime)
         {
             if(keysPressed[longestPressIndex] < keysPressed[i])
             {
                longestPressTime = currentPressTime;
                longestPressIndex = i;
             }
         }
         else if (currentPressTime > longestPressTime)
         {
             longestPressTime = currentPressTime;
             longestPressIndex = i;
         }
     }
        return keysPressed[longestPressIndex];
    }
};
