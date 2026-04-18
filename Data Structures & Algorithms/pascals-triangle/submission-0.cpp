class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        res.push_back({1});

        for(int i = 1; i < numRows; i++) {
            vector<int> temp; 
            int sum = 0 ;

            for(int j = 0; j <= i; j++) {
                if(i > 1) {
                    sum += res[i-1][j]; //sum = 4
                }
                if(j == 0 || j == i)
                    temp.push_back(1); // temp = [1,4,6,4]
                else{
                    temp.push_back(sum); 
                    sum -= res[i-1][j-1]; // sum = 3
                }
            }
            res.push_back(temp);
        }

        return res;
    }
};

/*

i = 0 res = [[1]];
i = 1 res = [[1], [1,1]]
i = 2 res = [[1], [1,1], [1,2,1]]
i = 3 res = [[1], [1,1], [1,2,1], [1,3,3,1]]
i = 4 res = [[1], [1,1], [1,2,1], [1,3,3,1],[]]

*/