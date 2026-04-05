class Solution {
    int dp[1001];
public:
    int solve(int i, vector<int>& cost, int N) {
        if (i >= N) return 0;
        if (dp[i] != -1) return dp[i];
        return dp[i] = cost[i] + min(solve(i + 1, cost, N), solve(i + 2, cost, N));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp, -1, sizeof(dp));
        int N = cost.size();
        return min(solve(0, cost, N), solve(1, cost, N));
    }
};
