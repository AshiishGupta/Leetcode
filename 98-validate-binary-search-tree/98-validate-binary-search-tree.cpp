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
    // Using recursion-- range method ,lower range and higher range
    
    bool isValidBST(TreeNode*root,long low,long high){
        if(root==NULL) return true;
        
        if(root->val<high && root->val>low){
            return isValidBST(root->left,low,root->val) && isValidBST(root->right,root->val,high);
        }
        else{
            return false;
        }
        
    }
    bool isValidBST(TreeNode* root) {
        long low=LONG_MIN;
        long high=LONG_MAX;
        return isValidBST(root,low,high);
    }
    
    
    // USING INORDER TRAVERSAL AND CHECKING IT IF IT IS VALID OR NOT 
    // POINT HERE IS: IN INORDER TRAVERSAL OF ANY BINARY TREE IS SORTED List
//     void inOrder(TreeNode* root) {
//         if (!root)
//             return;
//         inOrder(root->left);
//         tree.push_back(root->val);
//         inOrder(root->right);
        
//     }
   
//     bool isValidBST(TreeNode* root) {
//         if (!root)
//             return true;
        
//         inOrder(root);
//         for (int i=1; i<tree.size(); i++)
//             if (tree[i] <= tree[i-1])
//                 return false;
//         return true;
//     }
// private:
//     vector<int> tree;
};