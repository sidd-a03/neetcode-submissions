class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size(), sum = 0;
        for(int i = 1; i < n; i++) {
            int temp = (int)s[i] - (int)s[i-1];
            sum += abs(temp);
        }
        return sum;
    }
};