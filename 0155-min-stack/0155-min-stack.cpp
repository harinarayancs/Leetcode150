
class MinStack {
private:
    std::stack<int> stack;
    std::stack<int> minstack;

public:
    MinStack() {}

    void push(int val) {
        stack.push(val);
        if (minstack.empty() || val <= minstack.top()) {
            minstack.push(val);
        }
    }

    void pop() {
        if (!stack.empty()) {
            if (stack.top() == minstack.top()) {
                minstack.pop();
            }
            stack.pop();
        }
    }

    int top() {
        if (!stack.empty()) {
            return stack.top();
        }
        return -1;  // Handle error case when stack is empty
    }

    int getMin() {
        if (!minstack.empty()) {
            return minstack.top();
        }
        return -1;  // Handle error case when minstack is empty
    }
};
