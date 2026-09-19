class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        for (int i = 0; i < s2.size() - s1.size() + 1; i++) {
            string s = s2.substr(i, s1.size());
            vector<int> freq(26, 0);
            for(char c:s1) freq[c-'a']++;
            for(char c:s) freq[c-'a']--;
            bool t=true;
            for(int x:freq) if(x!=0) t=false;
            if(t) return true;
        }
        return false;
    }
};
