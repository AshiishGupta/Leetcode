class Solution {
public:
    // OPTIMISED
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        // transpose of matrix
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // REVERSE ALL THE ROWS
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};