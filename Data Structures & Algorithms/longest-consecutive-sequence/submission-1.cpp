class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int maxCount = 0;
        for(int i=0;i<nums.size();i++)st.insert(nums[i]);
        for (int i = 0; i < nums.size(); i++) {
            int ele = nums[i];

            int count = 1;
            if (st.count(ele - 1)) {
                continue;
            }
            while (st.count(ele + 1)) {
                ele++;
                count++;
            }
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};
