class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].size();
        string res = "";
        
        for(int i = 0; i < n; i++) {
            for(string s: strs) {
                if(i == s.size() || s[i] != strs[0][i])
                    return res;
            }
            res += strs[0][i];
        }
        return res;
    }
};