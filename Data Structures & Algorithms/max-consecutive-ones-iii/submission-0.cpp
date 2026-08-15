class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        int left = 0, maxx = 0, zeros = 0;

        for(int right = 0; right < n; right++) {
            if(!nums[right])
                zeros += 1; 

            while(zeros > k) {
                if(!nums[left])
                    zeros -= 1;

                left++;
            }
            maxx = max(maxx, right-left+1);
        }

        return maxx;
    }
};