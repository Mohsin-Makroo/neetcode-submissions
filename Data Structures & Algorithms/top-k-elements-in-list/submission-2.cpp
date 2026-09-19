class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;}
        vector<int> ans;
        for(auto it: mpp){
            if(it.second>=k) ans.push_back(it.first);
        }
        return ans;
    }
};
