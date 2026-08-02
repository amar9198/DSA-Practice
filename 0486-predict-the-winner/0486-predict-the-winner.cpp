class Solution {
public:
    int solve(vector<int>& nums, int i, int j, bool choose) {
        if (i > j)
            return 0;

        if (choose) {
            return max(nums[i] + solve(nums, i + 1, j, false),
                       nums[j] + solve(nums, i, j - 1, false));
        } else {
            return min(-nums[i] + solve(nums, i + 1, j, true),
                       -nums[j] + solve(nums, i, j - 1, true));
        }
    }

    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        int score = solve(nums, 0, n - 1, true);
        return score >= 0;
    }
};