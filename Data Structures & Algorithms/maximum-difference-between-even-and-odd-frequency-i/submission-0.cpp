class Solution {
public:
    int maxDifference(string s) {
        vector<int> alpha(26, 0);
        int maxi = INT_MIN, mini = INT_MAX;

        for(char ch: s) {
            alpha[ch-'a']++;
            int check = alpha[ch-'a'];

            if(check % 2)
                mini = min(mini, check);
            else
                maxi = max(maxi, check);
        }
        return maxi-mini;
    }
};