class Solution {
public:
    int mySqrt(int x) {
        long long low = 1, high = x;

        while (low <= high) {
            long long mid = low + (high - low) / 2; // 7 -> 3 -> 5
            long long square = mid * mid; // 49 -> 9 -> 25 -> 16

            if (square == x)
                return (int)mid;
            else if (square > x)
                high = mid - 1; // high = 6 -> 4
            else
                low = mid + 1; // low = 4
        }
        return (int)high;
    }
};

/*

1 -> 1
2 -> 4
3 -> 9
4 -> 16
5 -> 25


*/