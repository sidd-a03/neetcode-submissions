class Solution {
public:
    int searchRow(vector<int> &nums, int target) {
        int len = nums.size();
        int low = 0, high = len - 1;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] == target)
                return 1;
            else if(nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int low = 0, high = row - 1;
        int check = 0;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            int currFirst = matrix[mid][0];
            int currLast = matrix[mid][col - 1];

            if (target >= currFirst and target <= currLast) {
                check = searchRow(matrix[mid], target);
                break; 
            } 
            else if (target < currFirst) {
                high = mid - 1;
            } 
            else {
                low = mid + 1;
            }
        }
        return check == 1;
    }
};

/*

[ [1,2,4,8], [10,11,12,13], [14,20,30,40], [50,60,70,80], [90,100,200] ]   --> target = 8
      0             1               2              3            4


*/
