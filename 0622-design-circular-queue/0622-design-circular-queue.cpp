class MyCircularQueue {
private:
    
    int size;
    int capacity;
    int head;
    int tail;
    vector<int> data;

public:

    MyCircularQueue(int k) {
        capacity = k;
        head = 0;
        tail = 0;
        size = 0;
        data = vector<int>(k); 
    }
    
    bool enQueue(int value) {

        if (!isFull()) {
            data[tail] = value;
            tail = (tail + 1) % capacity;
            size++;
            return true;
        } else {
            return false;
        }
        
    }   
    
    bool deQueue() {
        if (!isEmpty()){
            head = (head + 1) % capacity;
            size--;
            return true;
        } else {
            return false;
        }
    }
    
    int Front() {
        if (!isEmpty()){
            return data[head];
        } else {
            return -1;
        }
    }
    
    int Rear() {
        if (!isEmpty()){
            int rearIndex = (tail - 1 + capacity) % capacity;
            return data[rearIndex];
        } else {
            return -1;
        }
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */