class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        unordered_map<int, int> mpp;

        int n = temperatures.size();
        vector<int> ans(n, 0);

        for(int i = n - 1; i >= 0; i--) {
            int val = temperatures[i];

            while(!st.empty() and st.top() < val)
                st.pop();
            
            if(!st.empty() and st.top() > val)
                ans[i] = mpp[st.top()] - i;
            
            st.push(val);
            mpp[val] = i;
        }
        return ans;
    }
};