class Solution {
public:
    int SolveTab(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) return 0;
        if (n == 1) return nums[0];

        vector<int> dp(n, 0);
        dp[0] = nums[0];

        for (int i = 1; i < n; i++) {
            int incl = nums[i];
            if (i > 1)
                incl += dp[i - 2];

            int excl = dp[i - 1];

            dp[i] = max(incl, excl);
        }

        return dp[n - 1];
    }

    int rob(vector<int>& nums) {
        return SolveTab(nums);
    }
};