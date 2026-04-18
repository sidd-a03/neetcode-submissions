class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(), words.end(), [](const string &a, const string &b) {
            return a.size() < b.size();
        });
        vector<string> res;
        int n = words.size();

        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(words[j].find(words[i]) != string::npos) {
                    res.push_back(words[i]);
                    break;
                }
            }
        }
        return res;
    }
};