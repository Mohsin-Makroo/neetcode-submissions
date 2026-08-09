class Solution {
   public:
    string encode(vector<string>& strs) {
        string encStr = "";
        for (int i = 0; i < strs.size(); i++) {
            encStr.append(to_string(strs[i].size()));
            encStr.append("#");
            encStr.append(strs[i]);
        }
        return encStr;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while (i < s.size()) {
            int len = 0;
             while (s[i] != '#') {
                len=10*len+s[i]-'0';
                i++;
             }
             i++;
             ans.push_back(s.substr(i,len));
             i+=len;
        }
        return ans;
    }
};
