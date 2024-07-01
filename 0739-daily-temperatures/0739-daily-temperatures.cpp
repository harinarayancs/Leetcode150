
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        vector<int> result(n, 0); // Initialize result vector with zeroes
        stack<int> st; // Stack to store indices of temperatures

        for (int i = 0; i < n; ++i) {
            // While stack is not empty and current temperature is greater than temperature at index of top of stack
            while (!st.empty() && T[i] > T[st.top()]) {
                int idx = st.top();
                st.pop(); // Get the index from the top of the stack
                result[idx] = i - idx; // Calculate the number of days until a warmer temperature
            }
            // Push the current index onto the stack
            st.push(i);
        }

        return result;
    }
};
