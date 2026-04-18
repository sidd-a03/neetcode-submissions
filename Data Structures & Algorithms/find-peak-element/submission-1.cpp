class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int len = nums.size();
        int low = 0, high = len - 1;

        if(len == 1)
            return 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if((nums[mid] > nums[mid - 1]) and (nums[mid] > nums[mid + 1] ))
                return mid;
            else if(nums[mid + 1] > nums[mid] and nums[mid] > nums[mid - 1])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};

/**

1 2 3 1
0 1 2 3


*/