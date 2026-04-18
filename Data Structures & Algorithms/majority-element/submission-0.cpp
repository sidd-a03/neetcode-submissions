class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = 0, cnt = 0;
        
        for(int val: nums) {
            if(cnt == 0)
                ele = val;
            if(val == ele)
                cnt++;
            else
                cnt--;
        }
        return ele;
    }
};