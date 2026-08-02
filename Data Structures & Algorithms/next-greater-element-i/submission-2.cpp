class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mpp;
        vector<int> res;

        int len = nums2.size();

        for(int i = 0; i < len; i++) {
            mpp[nums2[i]] = i;
        }

        for(int val: nums1) {
            int i = mpp[val];

            if(i < len-1 && nums2[i+1] > val)
                res.push_back(nums2[i+1]);
            else
                res.push_back(-1);
        }
        return res;
    }
};