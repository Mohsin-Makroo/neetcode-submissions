class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        vector<vector<int>> bucket(nums.size() + 1);
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        for (auto it : mpp) {
            bucket[it.second].push_back(it.first);
        }
        for (int i = bucket.size() - 1; i >= 0; i--) {
            for (int j = 0; j < bucket[i].size(); j++) {
                ans.push_back(bucket[i][j]);
                if (ans.size() == k) return ans;
            }
        }
    }
};
