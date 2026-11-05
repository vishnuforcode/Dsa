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

void solve(TreeNode* root , vector<vector<int>>& res){
  
    if(root == NULL) return  ;

    queue<TreeNode*>q ;
    q.push(root);


    while(!q.empty()){
        vector<int>ans ;

        int level = q.size() ;

        for(int i = 0 ; i < level; i++){
            TreeNode* curr = q.front();
            ans.push_back(curr->val);
            q.pop();

            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }

        res.push_back(ans);
    }
} 
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res ;
        solve(root ,res) ;
        return res ;
    }
};