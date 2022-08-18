class Solution {
public:
    // USE OF 4 POINTERS TRY YOURSELF
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int r_start=0,c_start=0,r_end=m-1,c_end=n-1;
        
        int dir=1;
        while(r_start<=r_end && c_start<=c_end){
            
            if(dir==1){
                // left to right
                for(int i=c_start;i<=c_end;i++){
                    ans.push_back(matrix[r_start][i]);
                }
                r_start++;
                dir=2;
            }
            else if(dir==2){
                // top to bottom
                for(int i=r_start;i<=r_end;i++){
                    ans.push_back(matrix[i][c_end]);
                }
                c_end--;
                dir=3;
            }
            else if(dir==3){
                // right to left
                for(int i=c_end;i>=c_start;i--){
                    ans.push_back(matrix[r_end][i]);
                }
                r_end--;
                dir=4;
            }
            else if(dir==4){
                // bottom to top
                for(int i=r_end;i>=r_start;i--){
                    ans.push_back(matrix[i][c_start]);
                }
                c_start++;
                dir=1;
            }
            
            
        }
        
        
        return ans;
    }
};