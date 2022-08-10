class Solution {
public:
    // RECURSION BACKTRACKING TECHNIQUE
    void combination(vector<vector<int>> & ans,vector<int> temp,int index,int n,int k){
        // BASE CASE
        if(temp.size()==k){
            ans.push_back(temp);
            return ;
        }
        
        for(int i=index;i<n;i++){
            temp.push_back(i+1);
            combination(ans,temp,i+1,n,k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        combination(ans,vector<int>(),0,n,k);
        return ans;
    }
};