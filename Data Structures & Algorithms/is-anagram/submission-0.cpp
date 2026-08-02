class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.size(), n2 = t.size();

        if(n1 != n2) return false;

        vector<int> alpha(27, 0);
        for(char ch: s) {
            alpha[ch - 'a']++;
        }

        for(char ch: t) {
            if(alpha[ch - 'a'] == 0)
                return false;
        }

        return true;
    }
};
