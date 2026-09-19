class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int l = 0, r = 0;
        int longest = 0;
        while (r < s.size()) {
            while (st.count(s[r])) {
                st.erase(s[l]);
                l++;
            }
            longest = max(longest, r - l + 1);
            st.insert(s[r]);
            r++;
        }
        return longest;
    }
};
