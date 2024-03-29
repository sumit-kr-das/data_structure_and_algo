class Solution {
    public: 
    bool isValidBST(TreeNode* root) {
        return check(root,LONG_MIN , LONG_MAX);
    }
    
     bool check(TreeNode* root, long minVal, long maxVal) {
        if (root == NULL) return true;
        if (root->val >= maxVal || root->val <= minVal) return false;
        return check(root->left, minVal, root->val) && check(root->right, root->val, maxVal);
    }
}; 