class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ele = nums[0];

        for(int i = 1; i < nums.size(); i++)
            ele ^= nums[i];
        return ele;
    }
};

/*

1 1 2 3 3 4 4 8 8
0 1 2 3 4 5 6 7 8


*/