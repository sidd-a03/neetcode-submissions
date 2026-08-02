class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size() == 1 && n == 1)
            return true;
            
        for(int i = 1; i < flowerbed.size(); i++){
            if(flowerbed[i] == 0 && flowerbed[i-1] != 1) {
                flowerbed[i] = 1;
                n--;
            }
            if(n == 0)
                return true;
        }
        return false;
    }
};