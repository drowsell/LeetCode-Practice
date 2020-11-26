class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        double answer = 0;
        
        if(n == 0 || n < 0)
            return false;
        else
            answer = log2(n);
        
        if(answer == static_cast<int>(answer))
            return true;
        
        cout << answer << endl;
        
        return false;
    }
};
