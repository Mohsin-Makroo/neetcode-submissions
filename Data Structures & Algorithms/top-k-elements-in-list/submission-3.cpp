class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        vector<pair<int, int>> v;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        for (auto it:mpp) {
            v.push_back({it.first,it.second});
        }
        sort(v.begin(), v.end(), [](auto& a, auto& b) { return a.second > b.second; });
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
