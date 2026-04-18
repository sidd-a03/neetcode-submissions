class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int len = nums.size();
        int low = 0, high = len - 1;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(mid > 0 and nums[mid - 1] > nums[mid])
                high = mid - 1;
            else if(mid + 1 < len and nums[mid + 1] > nums[mid])
                low = mid + 1;
            else
                return mid;
        }
    }
};