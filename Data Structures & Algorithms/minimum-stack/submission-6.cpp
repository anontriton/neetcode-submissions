class MinStack {
private:
    vector<int> mainStack;
    vector<int> minStack;

public:
    MinStack() {}
    
    void push(int val) {
        if (minStack.empty() || val <= minStack.back()) {
            minStack.push_back(val);
        }
        mainStack.push_back(val);
    }
    
    void pop() {
        if (mainStack.back() == minStack.back() && !mainStack.empty()) {
            minStack.pop_back();
        }
        if (!mainStack.empty()) {
            mainStack.pop_back();
        }
    }
    
    int top() {
        return mainStack.back();
    }
    
    int getMin() {
        return minStack.back();
    }
};
