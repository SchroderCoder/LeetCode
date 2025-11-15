class MinStack {
private:
    struct Node{
        int val;
        int minVal;
        Node * next;

        Node ( int v, int m, Node * n) : val (v), minVal (m), next (n) {}
    };

    Node * head;

public:
    MinStack() : head(nullptr) {}
    
    void push(int val) {
        if ( head == nullptr){
            head = new Node ( val, val, nullptr);
        } else{
            head = new Node(val, std::min(val, head->minVal), head);
        }
    }
    
    void pop() {
        Node * temp;
        temp = head;
        head = head-> next;
        delete temp;
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        return head->minVal;
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