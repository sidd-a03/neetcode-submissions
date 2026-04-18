class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result(nums);

        for(int val: nums) {
            result.push_back(val);
        }
        return  result;
    }
};