class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        int n = position.size();

        for(int i = 0; i < n; i++)
            cars.push_back({position[i], speed[i]});
        // [(6,3), (8,2)]

        sort(cars.begin(), cars.end());

        stack<double> st;

        for(auto it: cars) {
            double time = (target - it.first) / (double)it.second;

            while(!st.empty() and st.top() <= time)
                st.pop();

            st.push(time);
        }
        // st = [1.3, 1]
        return st.size();
    }
};
