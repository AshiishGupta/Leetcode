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
    
    // When we are taking ans as global variable then only it is working not working in passing by reference
    int ans=0;
    void dfs(TreeNode* root,int x){
        
        if(root==NULL){
            return ;
        }
        if(root->val >= x){
            ans+=1;
            x=root->val;
        }
        
        dfs(root->left,x);
        dfs(root->right,x);
    }
    
    int goodNodes(TreeNode* root) {
        int x=root->val;
        dfs(root,x);
        return ans;
    }
};