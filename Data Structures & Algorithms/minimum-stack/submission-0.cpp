class MinStack {
public:
    stack<int>s1;
    stack<int>s2;
    MinStack() {
        
    }
    
    void push(int val) {
        s1.push(val);
        if(s2.size() == 0)s2.push(val);
        else{
            if(val <= s2.top()) s2.push(val);
        }
    }
    
    void pop() {
        int val = s1.top();
        s1.pop();
        if(s2.top() == val) s2.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};
