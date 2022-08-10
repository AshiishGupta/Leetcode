class Solution {
public:
    // WE ARE DOING MEMOIZATION TO THAT RECURSIVE SOLN
//     int countway(int n,vector<int> &memo){
        
//         if(n<0){
//             return 0;
//         }
//         if(memo[n]!=-1) return memo[n];
        
//         if(n==0) return 1;
        
//         return memo[n]=countway(n-1,memo)+countway(n-2,memo);
//     }
//     int climbStairs(int n) {
//         vector<int> memo(n+1,-1);
//         return countway(n,memo);
//     }
    
    // CONVERTING MEMOIZATION TO TABULATION OR DP
    int climbStairs(int n){
        if(n<0) return 0;
        
        int dp[100];
        dp[0]=1;
        dp[1]=2;
        
        for(int i=2;i<n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n-1];
    }
    
    
    
    
    // RECURSIVE
    // int ans(int n){
    //     if(n<=2){
    //         return n;
    //     }
    //     return ans(n-1)+ans(n-2);
    // }
    // int climbStairs(int n) {
    //     return ans(n);
    // }
};  