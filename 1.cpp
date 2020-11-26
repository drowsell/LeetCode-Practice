class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> temp = A;
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A.size(); j++)
            {
                temp[i][A.size()-j-1] = A[i][j];
                if(temp[i][A.size()-j-1] == 0)
                {
                    temp[i][A.size()-j-1] = 1;
                }
                else
                {
                    temp[i][A.size()-j-1] = 0;
                }
            }
            
        }
        
        return temp;
    }
};
