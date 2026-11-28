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
    TreeNode* build(vector<int>&preorder , int start ,int end){
        if(start > end) return NULL ;

        TreeNode* root = new TreeNode(preorder[start]);

        int left = start+1 ;
        int right = end+1 ;

        while(left < right){
            int mid = left + (right - left)/2 ;

            if(preorder[mid] > root->val) {
                right = mid ;
            }
            else{
                left = mid+1 ;
            }
        }

        int splitIndx = left ;

        root->left = build(preorder , start+1,splitIndx-1 );
        root->right = build(preorder , splitIndx ,end);

    return root ;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       return  build(preorder , 0 , preorder.size()-1);
    }
};