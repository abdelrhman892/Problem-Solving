class MinStack {
    struct Node {
        int val;
        Node* next;
    };
    Node* head;
public:
    MinStack() {
        head = nullptr;
    }

    void push(int val) {
        Node* newNode = new Node;
        newNode->val = val;
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        if (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    int top() {
        if (head == nullptr) {
            throw std::runtime_error("Stack is empty");
        }
        return head->val;
    }

    int getMin() {
        if (head == nullptr) {
            throw std::runtime_error("Stack is empty");
        }
        int min = head->val;
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->val < min) {
                min = temp->val;
            }
            temp = temp->next;
        }
        return min;
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