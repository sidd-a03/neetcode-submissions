class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int len = nums.size();
        int low = 0, high = len - 1;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if((mid - 1 < 0 or nums[mid - 1] != nums[mid]) and (mid +1 > len or nums[mid + 1] != nums[mid]))
                return nums[mid];

            int leftSize = nums[mid - 1] == nums[mid] ? mid - 1 : mid;

            if(leftSize % 2)
                high = mid - 1;
            else
                low = mid + 1;
        }
    }
};

/*

1 1 2 3 3 4 4 8 8
0 1 2 3 4 5 6 7 8

*/

