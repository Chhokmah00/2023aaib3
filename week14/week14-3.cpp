class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0; //終止條件
        int ans1 = maxDepth(root->left);
        int ans2 = maxDepth(root->right);
        return max(ans1,ans2)+1;
    }
};