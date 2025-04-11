#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};
class Queue {
    private:
        Node* front;
        Node* rear;
    
    public:
        Queue() {
            front = rear = nullptr;
        }
    

        void enqueue(int value) {
            Node* newNode = new Node(value);
            if (rear == nullptr) {
                front = rear = newNode;
                return;
            }
            rear->next = newNode;
            rear = newNode;
        }


    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = front;
        front = front->next;
 
        if (front == nullptr)
            rear = nullptr;

        delete temp;
    }
    void display() {
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int peek() {
        if (front == nullptr) {
            cout << "Queue is empty\n";
            return -1;
        }
        return front->data;
    }
    bool isEmpty() {
        return front == nullptr;
    }
};
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    cout << "Front element: " << q.peek() << endl;

    return 0;
}