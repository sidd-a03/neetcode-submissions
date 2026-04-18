class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n-1, length = 0;

        while(i >= 0) {
            if(s[i] != ' ')
                length++;
            if(length > 0 && s[i] == ' ')
                break;
            i--;
        }
        return length;
    }
};