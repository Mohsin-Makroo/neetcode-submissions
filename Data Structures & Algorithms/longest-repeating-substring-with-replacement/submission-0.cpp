class Solution {
   public:
    int characterReplacement(string s, int k) {
        int ans = 0, l = 0, r = 0, maxF = 0;
        vector<int> freq(26, 0);
        while (r < s.size()) {
            freq[s[r] - 'A']++;
            maxF = max(maxF, freq[s[r] - 'A']);
            while (r - l + 1 - maxF > k) {
                freq[s[l] - 'A']--;
                l++;
            }
            ans = max(ans, r - l + 1);
            r++;
        }
        return ans;
    }
};
