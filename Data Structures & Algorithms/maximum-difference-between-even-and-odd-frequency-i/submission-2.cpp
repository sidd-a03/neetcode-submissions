class Solution {
public:
    int maxDifference(string s) {
        vector<int> alpha(26, 0);
        int maxi = INT_MIN, mini = INT_MAX;

        for(char ch: s)
            alpha[ch-'a']++;

        for(int val: alpha) {
            if(val != 0) {
                if(val % 2 == 0)
                    mini = min(mini, val);
                else
                    maxi = max(maxi, val);
            }
        }
        return maxi-mini;
    }
};