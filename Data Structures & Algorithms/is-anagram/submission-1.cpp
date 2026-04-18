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
            alpha[ch - 'a']--;
        }

        for(int val: alpha) {
            if(val)
                return false;
        }

        return true;
    }
};


/*

s = "racecar"

r -> 2
a -> 2
c -> 2
e -> 1

*/
