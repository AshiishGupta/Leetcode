class Solution {
public:
    // BINARY SEARCH METHOD MOST OPTIMAL
    // T(c)=LOG2(N*M)
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        
        int lo=0;
        int mid;
        int hi=(m*n)-1;
        while(lo<=hi){
            mid=(lo+(hi-lo)/2);
            if(matrix[mid/m][mid%m]==target){
                return true;
            }
            if(matrix[mid/m][mid%m]<target){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return false;
    }
};