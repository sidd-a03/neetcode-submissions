class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        int n = strs.size();

        // act, cat, hat, pots, tops, stop

        for(string str: strs) {
            string sortedStr = str;
        }

        // for(int i = 0; i < n-1; i++) {
        //     int cnt = 0;
        //     for(char ch: words[i]) {
        //         if(words[i+1].find(ch) != string::npos)
        //             cnt++;
        //     }
        //     if(cnt == words[i].size()) {
        //         res.push_back({words[i], words[i+1]})
        //         i++;
        //     } else
        //         res.push_back({words[i]});
        // }
    }
};
