class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        int x=target.size();
        
        if(n*n!=x*x) return false;
        if(mat==target) return true;
        int cnt=3;
        while(cnt--){
            
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                    swap(mat[i][j],mat[j][i]);
                }
            }
            for(int i=0;i<n;i++){
                reverse(mat[i].begin(),mat[i].end());
            }
            if(mat==target) return true;
        }
        
        
        return false;
    }
};