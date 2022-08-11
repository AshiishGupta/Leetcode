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
    // ITERATIVE USING STACK
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> inorder;
        while(true){
            if(root!=NULL){
                st.push(root);
                root=root->left;
            }
            else{
                if(st.empty()==true) break;
                
                root=st.top();
                st.pop();
                inorder.push_back(root->val);
                root=root->right;               
                
            }
        }
        return inorder;
        
    }

    
    // RECURSIVE SOLN
    // void solve(TreeNode* root,vector<int> &ans){
    //     if(root==NULL){
    //         return ;
    //     }
    //     else{
    //         solve(root->left,ans);
    //         ans.push_back(root->val);
    //         solve(root->right,ans);
    //     }
    // }
    // vector<int> inorderTraversal(TreeNode* root) {
    //     vector<int> ans;
    //     solve(root,ans);
    //     return ans;
    // }
};