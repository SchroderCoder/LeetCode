class MyStack {
public:

    queue<int> queue;

    MyStack() {

    }
    
    void push(int x) {
        queue.push(x);
        int n = queue.size();

        while( n > 1){
            queue.push(queue.front());
            queue.pop();
            n--;
        }

    }
    
    int pop() {
        int val = queue.front();
        queue.pop();
        return val;
    }
    
    int top() {
        return queue.front();
    }
    
    bool empty() {
        return queue.empty();
    }

};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */