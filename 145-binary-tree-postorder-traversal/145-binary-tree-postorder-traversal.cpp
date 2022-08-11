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
    // ITERATIVE USING 2 STACKS
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        stack<TreeNode*> st1,st2;
        st1.push(root);
        
        while(!st1.empty()){
                    
            root=st1.top();
            st1.pop();
            st2.push(root);
            if(root->left!=NULL) {
                st1.push(root->left);
                
            }
            if(root->right!=NULL){
                st1.push(root->right);
            }
            
        }
        while(!st2.empty()){
            ans.push_back(st2.top()->val);
            st2.pop();
        }       
        return ans;
    }
    
    
    // RECURSIVE SOLN
//     void solve(TreeNode* root,vector<int> &ans){
//         if(root==NULL) return;
//         solve(root->left,ans);
//         solve(root->right,ans);
//         ans.push_back(root->val);        
//     }
    
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         solve(root,ans);
//         return ans;
//     }
};