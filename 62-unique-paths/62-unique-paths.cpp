class Solution {
public:
    // BETTER SOLUTION NOT OPTIMAL T(C)=O(N*M) s(C)=O(n*m)
    // OPTIMAL SOLUTION IS USING COMBNATION METHOD 
    int countpath(int i,int j,int m,int n,vector<vector<int>> &dp){
        if(i==m-1 && j==n-1){
            return 1;
        }
        if(i>m-1 || j>n-1){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        else return dp[i][j]=countpath(i+1,j,m,n,dp)+countpath(i,j+1,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        int a=0,b=0;
        return countpath(a,b,m,n,dp);
        
    }
};