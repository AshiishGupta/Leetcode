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
    int res=0;
    unordered_map<int,int> mp;
    
    void preorder(TreeNode* root){
        
        if(root==NULL) return ;
        mp[root->val]++;
        
        if(!root->left && !root->right){
            int temp=0;
            for(auto i:mp){
                if(i.second %2==1){
                    temp++;
                }
            }
            if(temp<=1){
                res++;
            }
        }
        preorder(root->left);
        preorder(root->right);
        mp[root->val]--;
        
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        preorder(root);
        return res;
    }
};