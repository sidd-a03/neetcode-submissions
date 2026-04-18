class Solution {
public:
    int appendCharacters(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        int i = 0, j = 0;

        while(j < n1) {
            if(s[j] == t[i]) {
                i++;
                j++;
            } else 
                j++;
        }
        return n2 - i;
    }
};