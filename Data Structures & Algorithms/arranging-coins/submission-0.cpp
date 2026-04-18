class Solution {
public:
    int arrangeCoins(int n) {
        long long low = 1;
        long long high = n;

        while(low <= high) {
            long long mid = low + (high - low) / 2;
            long long coinsNeed = mid * (mid + 1) / 2;

            if(coinsNeed == n)
                return (int)mid;
            else if(coinsNeed < n)
                low = mid + 1;
            else 
                high = mid - 1;
        }

        return (int)high;
    }
};