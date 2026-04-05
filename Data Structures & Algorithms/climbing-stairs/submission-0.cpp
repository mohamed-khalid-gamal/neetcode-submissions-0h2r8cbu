class Solution {
    int dp[30];
public:
    int solve(int i , int N) {
        if (i == N) return 1;
        if (i>N) return 0;
        if (dp[i] != -1) return dp[i];
        return dp[i]= solve(i+1,N) + solve(i+2,N);
    }
    int climbStairs(int n) {
            memset(dp, -1, sizeof(dp));
        solve(0,n);
    }
};
