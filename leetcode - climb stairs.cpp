class Solution {
public:
    int climbStairs(int n)
    {
        if (n == 0 or n == 1 or n == 2)
            return n;

        int dp[n + 1];
        //No. of ways to get to 0th step
        dp[0] = 0;
        //No. of ways to get to 1st step (0->1)
        dp[1] = 1;
        //No. of ways to get to 2nd step (0->1->2 or 0->2)
        dp[2] = 2;

        for (int i = 3 ; i <= n ; i++)
            dp[i] = dp[i - 1] + dp[i - 2];

        return dp[n];
    }
};
