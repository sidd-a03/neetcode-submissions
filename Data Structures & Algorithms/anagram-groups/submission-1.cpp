class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;

        unordered_map<string, vector<string>> mpp;

        for(string str: strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            mpp[sortedStr].push_back(str);
        }

        for(auto it: mpp)
            res.push_back(it.second);
        
        return res;
    }
};
