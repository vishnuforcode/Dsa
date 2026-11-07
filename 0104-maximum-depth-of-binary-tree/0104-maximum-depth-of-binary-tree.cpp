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
void solve(TreeNode* root , int level , int& count){
     if(root == NULL) return ;
    count = max(level ,count);

   

    if(root->left) solve(root->left , level+1 ,count);
    if(root->right) solve(root->right , level+1 ,count);

}
    int maxDepth(TreeNode* root) {
        int count = 0;
        solve(root , 1 , count);

        return count ;
    }
};