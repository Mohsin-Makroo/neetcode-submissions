class Solution {
   public:
    int trap(vector<int>& heights) {
        int n = heights.size();
        vector<int> right(n);
        vector<int> left(n);
        right[n - 1] = heights[n - 1];
        left[0] = heights[0];
        for (int i = 1; i < n; i++) {
            left[i] = max(left[i - 1], heights[i]);
        }
        int ans = 0;
        for (int i = n - 2; i > -1; i--) {
            right[i] = max(right[i + 1], heights[i]);
            ans += min(right[i], left[i]) - heights[i];
        }
        return ans;
    }
};
