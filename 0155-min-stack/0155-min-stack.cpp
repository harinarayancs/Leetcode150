
class MinStack {
private:
    std::stack<int> stack;
    std::stack<int> minstack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack.push(val);
        if(minstack.empty() || val<=minstack.top()){
            minstack.push(val);
        }
    }
    
    void pop() {
        if(!stack.empty()&& !minstack.empty()){
        if(stack.top()==minstack.top()){
            minstack.pop();
        }
        stack.pop();
        }
    }
    
    int top() {
        if(!stack.empty()){
            return stack.top();
         }
        return -1;
        
    }
    
    int getMin() {
         if(!minstack.empty()){
            return minstack.top();
         }
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */