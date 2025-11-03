class myQueue {
private:
    vector<int> arr;  
    int front;       
    int rear;         
    int size;        
    int capacity;    

public:
    myQueue(int n) {
        arr.resize(n);
        capacity = n;
        front = 0;
        rear = -1;
        size = 0;
    }
    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is Full\n";
            return;
        }
        rear = (rear + 1) % capacity;  
        arr[rear] = x;
        size++;
    }


    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        front = (front + 1) % capacity; 
        size--;
    }

 
    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return arr[front];
    }


    int getRear() {
        if (isEmpty()) {
            return -1;
        }
        return arr[rear];
    }
};
