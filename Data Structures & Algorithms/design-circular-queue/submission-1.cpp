class MyCircularQueue {
public:
    vector<int>arr;
    int f,r;
    int cap;
    int k;
    MyCircularQueue(int k) {
        this->k = k;
        arr.resize(k);
        f = 0,r=-1;
        cap = 0;
    }
    
    bool enQueue(int value) {
        if(cap == k) return false;
        else{
            r = (r+1)%k; 
            arr[r] = value;
            cap++;
        }
        return true;
    }
     bool deQueue() {
        if(cap == 0) return false;
        else{
            f = (f+1)%k;
            cap--;
        }
        return true;
    }
    
    int Front() {
        if(cap == 0) return -1;
        return arr[f];
    }
    
    int Rear() {
        if(cap == 0) return -1;
        return arr[r];
    }
    
    bool isEmpty() {
        if(cap == 0) return true;
        else return false;
    }
    
    bool isFull() {
        if(cap == k) return true;
        else return false;
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