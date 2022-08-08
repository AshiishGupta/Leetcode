class Solution {
public:
    // OPTIMAL APPROACH: BINARY SEARCH METHOD MOST OPTIMAL
    // T(c)=LOG2(N*M)
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        int r=matrix.size();
        int c=matrix[0].size();
        int l=0,h=r*c-1;
        
        while(l<=h){
            
            int mid=l+(h-l)/2;
            if(matrix[mid/c][mid%c]==target){
                return true;
            }
            if(matrix[mid/c][mid%c]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
            
        }
        
        return false;
    }

    
    // BETTER APPROACH
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row=matrix.size();
//         int r=0;
//         int c=matrix[0].size()-1;
//         bool flag=false;
//         while(r<row && c>=0){
//             if(matrix[r][c]==target){
//                 flag=true;
//             }
//             if(matrix[r][c]>target){
//                 c--;
//             }
//             else{
//                 r++;
//             }
            
//         }
        
//         return flag;
//     }
};