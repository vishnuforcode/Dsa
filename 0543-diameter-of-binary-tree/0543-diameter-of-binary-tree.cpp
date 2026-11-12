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
    int solve(TreeNode* root , int& maxDia){
        if(root == NULL){
            return 0 ;
        }

        int leftheight = solve(root->left, maxDia);
        int rightheight = solve(root->right , maxDia);

        maxDia = max(maxDia , leftheight+rightheight);

        return 1+ max(leftheight , rightheight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0 ;

        solve(root, maxDia);

        return maxDia ;
    }
};