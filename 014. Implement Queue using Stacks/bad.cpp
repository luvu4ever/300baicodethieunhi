class MyQueue {
    stack<int> first;
    stack<int> second;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        first.push(x);
    }
    
    int pop() {
        while(first.size()!= 1){
            second.push(first.top());
            first.pop();
        }
        int temp = first.top();
        first.pop();
        while(!second.empty()){
            first.push(second.top());
            second.pop();
        }
        return temp;
    }
    
    int peek() {
        while(!first.empty()){
            second.push(first.top());
            first.pop();
        }
        int temp = second.top();
        while(!second.empty()){
            first.push(second.top());
            second.pop();
        }
        return temp;
    }
    
    bool empty() {
        if(!first.empty())
            return false;
        return true;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */