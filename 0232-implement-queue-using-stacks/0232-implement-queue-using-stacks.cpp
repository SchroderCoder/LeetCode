class MyQueue {
public:
    stack<int> instack;
    stack<int> outstack;

    MyQueue() {
    }
    
    void push(int x) {
        instack.push(x);
    }
    
    int pop() {
        fillOutstack();
        int val;
        val = outstack.top();
        outstack.pop();
        return val;
    }
    
    int peek() {
        fillOutstack();
        return outstack.top();
    }
    
    bool empty() {
        return instack.empty() && outstack.empty();
    }

    void fillOutstack(){
        if( outstack.empty()){
            while(!instack.empty()){
                outstack.push(instack.top());
                instack.pop();
            }
        }
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