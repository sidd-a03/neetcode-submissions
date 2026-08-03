class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;
        int n = position.size();

        for(int i = 0; i < n; i++)
            cars.push_back({position[i], speed[i]});
        // [(4,2), (1,2), (0,1), (7,1)]

        sort(cars.rbegin(), cars.rend());
        // [(7,1), (4,2), (1,2), (0,1)]

        stack<double> st;

        for(auto it: cars) {
            double time = (target - it.first) / it.second;

            while(!st.empty() and st.top() >= time)
                st.pop();

            st.push(time);
        }
        // st = [3, 4.5, 10]
        return st.size();
    }
};
