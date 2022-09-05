/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        
        while(!q.empty()){
            
            vector<int> currlevel;
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* temp=q.front();
                q.pop();
                currlevel.push_back(temp->val);
                for(auto j:temp->children){
                    q.push(j);
                }
            }
            ans.push_back(currlevel);
            
        }
                
        return ans;
        
    }
};