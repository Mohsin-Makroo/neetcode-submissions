class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> right(n, 1);
        right[n - 2] = nums[n - 1];
        vector<int> ans(n, 1);
        for (int i = n - 2; i >= 0; i--) {
            right[i] = right[i + 1] * nums[i + 1];
        }
        int pre=1;
        for (int i = 0; i < n; i++) {
            ans[i] = pre * right[i];
            pre = pre * nums[i];
        }
        return ans;
    }
};
