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
    // ITERATIVE APPROACH
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if(root==NULL) return preorder;
        
        stack<TreeNode*> st;
        st.push(root);
        
        while(!st.empty()){
            root=st.top();
            preorder.push_back(root->val);
            st.pop();
            if(root->right!=NULL){
                st.push(root->right);
            }
            if(root->left!=NULL){
                st.push(root->left);
            }
        }
        return preorder;
    }
    
    // RECURSIVE APPROACH
//     vector<int> preorder(TreeNode* root,vector<int> &ans){
//         if(root==NULL)
//             return ans;
        
//         ans.push_back(root->val);
//         preorder(root->left,ans);
//         preorder(root->right,ans);
//         return ans;
//     }
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         return preorder(root,ans);
//     }
};