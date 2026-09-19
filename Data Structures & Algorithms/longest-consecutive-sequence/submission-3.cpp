class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int count, maxCount = 0;
        for (int x : nums) {
            st.insert(x);}
        for (int x : st) {
            int ele = x;
            count=1;
            if (st.count(ele - 1)) continue;
            while (st.count(ele + 1)) {
                count++;
                ele++;
            }
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};
