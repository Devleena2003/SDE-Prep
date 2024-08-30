class MinStack {
public:
  stack<long long> min_stack;
  long long min_ele = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
      if (min_stack.empty()) {
            min_stack.push(val);
            min_ele = val;
        } else {
            if (val < min_ele) {
                long long tempval = 2 * (long long)val;  
                min_stack.push(tempval - min_ele);
                min_ele = val;
            } else {
                min_stack.push(val);
            }
        }   
    }
    
    void pop() {
             if (min_stack.empty()) return;
        if (min_stack.top() < min_ele) {
            min_ele = 2 * min_ele;
            min_ele -=  min_stack.top();
        }
        min_stack.pop(); 
    }
    
    int top() {
     if (min_stack.empty()) return -1;
        if (min_stack.top() < min_ele) {
            return min_ele;
        }
        return min_stack.top();    
    }
    
    int getMin() {
        return min_ele; 
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