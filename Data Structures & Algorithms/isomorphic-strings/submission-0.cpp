class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> helper1;
        unordered_map<char, int> helper2;

        for(char ch: s)
            helper1[ch]++;
        for(char ch: t)
            helper2[ch]++;

        return helper1.size() == helper2.size();
    }
};