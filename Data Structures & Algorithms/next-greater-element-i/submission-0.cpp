class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mpp;
        vector<int> res;

        for(int i = 0; i < nums2.size(); i++) {
            mpp[nums2[i]] = i;
        }

        for(int val: nums1) {
            int i = mpp[val];
            if(nums2[i+1] > val)
                res.push_back(nums2[i+1]);
            else
                res.push_back(-1);
        }
        return res;
    }
};