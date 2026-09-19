class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> right(n, 1);
        vector<int> left(n, 1);
        vector<int> ans(n, 1);
        int prod = 1;
        for (int i = 1; i < n; i++) {
            prod = prod * nums[i - 1];
            left[i] = prod;
        }
        prod = 1;
        for (int i = nums.size() - 2; i >= 0; i--) {
            prod *= nums[i + 1];
            right[i] = prod;
        }
        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
        }
        return ans;
    }
};
