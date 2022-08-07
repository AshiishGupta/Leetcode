class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
//         int row=mat.size(),col=mat[0].size();
//         vector<vector<int>> ans(r,vector<int> (c));
//         if(row*col != c*r) return mat;

//         for(int i=0;i<row*col;i++){
//             ans[i/c][i%c]=mat[i/col][i%col];    
//         }
//         return ans;
        
        int row=mat.size(),col=mat[0].size();
        if(row*col != c*r) return mat;
        vector<vector<int>> ans;
        vector<int> temp;
        int rows=0;
        int cols=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                temp.push_back(mat[i][j]);
                cols++;
                if(cols==c){
                    rows++;
                    cols=0;
                    ans.push_back(temp);
                    temp.clear();
                }
                
            }
        }
        return ans;
    }
};