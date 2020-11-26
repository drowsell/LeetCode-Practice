/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> leafValueSequence(TreeNode* root, vector<int> temp){
        
        if (root->left == NULL && root->right == NULL)
        {
            temp.push_back(root->val);
            return temp;
        }
        
        if (root->left != NULL)
        {
            temp = leafValueSequence(root->left, temp);
        }
        
        if (root->right != NULL)
        {
            temp = leafValueSequence(root->right, temp);
        }
        
        return temp; 
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> temp1;
        vector<int> temp2;
        
        temp1 = leafValueSequence(root1, temp1);
        temp2 = leafValueSequence(root2, temp2);
        
        if(temp1 == temp2)
        {
            return true;
        }
        
        return false;
    }
};
