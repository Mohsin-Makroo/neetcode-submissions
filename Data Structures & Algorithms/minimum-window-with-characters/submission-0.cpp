class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> need(128, 0);
        for (char c : t) need[c]++;

        int l = 0, count = t.size();
        int start = 0, minLen = INT_MAX;

        for (int r = 0; r < s.size(); r++) {
            if (need[s[r]] > 0) count--;
            need[s[r]]--;

            while (count == 0) {
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    start = l;
                }

                need[s[l]]++;
                if (need[s[l]] > 0) count++;
                l++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};