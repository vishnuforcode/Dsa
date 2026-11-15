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
    void dfs(TreeNode* root ,int row, int col , vector<tuple<int,int,int>>&nodes ){
        if(root== NULL) return ;

        nodes.push_back({col,row,root->val});

        dfs(root->left , row+1 , col-1 , nodes);
        dfs(root->right , row+1 , col+1 , nodes);

    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(root == NULL) return {};
        vector<tuple<int,int,int>>nodes ;
        dfs(root , 0,0,nodes);

            sort(nodes.begin(),nodes.end()) ;

            vector<vector<int>>ans ;
            int prevCol = INT32_MIN ;

            for(auto& entry : nodes){
                auto&[col ,row,value] = entry ;

                if(col != prevCol){
                    ans.push_back({}) ;
                    prevCol = col ;
                }
                ans.back().push_back(value) ;
            }

            return ans ;
        
    }
};