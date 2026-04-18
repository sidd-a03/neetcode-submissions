class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mpp;
        vector<int> res;

        for(int i = 0; i < nums2.size(); i++) {
            mpp[nums2[i]] = i;
        }

        for(int i = 0; i < nums1.size(); i++) {
            int val = nums1[i]; // val = 1
            int index = mpp[val]; // index = 0
            int maxi = val; // maxi = 1

            while(index < nums2.size()) {
                maxi = max(maxi, nums2[index]);
                if(maxi > val)
                    break;
                index++;
            }

            if(maxi == val)
                res.push_back(-1);
            else
                res.push_back(maxi);
        }
        return res;
    }
};