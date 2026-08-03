class Solution {
public:
    int calculate(int op1, int op2, string op) {
        if(op == "+") return op1 + op2;
        else if(op == "-") return op1 - op2;
        else if(op == "*") return op1 * op2;
        
        return op1 / op2;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(string str: tokens) {
            if(str != "+" and str != "-" and str != "*" and str != "/")
                st.push(stoi(str));
            else {
                int op2 = st.top();
                st.pop();

                int op1 = st.top();
                st.pop();

                int ans = calculate(op1,op2, str);
                st.push(ans);
            }
        }
        return st.top();
    }
};
