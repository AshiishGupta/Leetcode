class Solution {
public:
    int dp[31]={0};
    int fib(int n) {
        // USING DP
        if(n==0 || n==1) return n;
        if(dp[n]){
            return dp[n];
        }
        return dp[n]=fib(n-1)+fib(n-2);
        
        // USING RECURSION
        // if(n==0 || n==1) return n;
        // return fib(n-1)+fib(n-2);
    }
};