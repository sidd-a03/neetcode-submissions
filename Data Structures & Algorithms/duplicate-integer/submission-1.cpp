class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> result;

        for(int val: nums) {
            result[val]++;
            if(result[val] > 1)
                return true;
        } 

        return false;
    }
};