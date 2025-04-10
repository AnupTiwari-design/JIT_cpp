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
class SinglyLinkedList {
    private:
        Node* head;
    
    public:
        SinglyLinkedList() {
            head = nullptr;
        }
        void insert_at_end(int value) {
            Node* newNode = new Node(value);
            if (head == nullptr) {
                head = newNode;
                return;
            }
    
            Node* temp = head;
            while (temp->next != nullptr && temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        bool is_circular() {
            if (head == nullptr) return false;
    
            Node* temp = head->next;
            while (temp != nullptr && temp != head) {
                temp = temp->next;
            }
            return (temp == head);
        }
        void make_circular() {
            if (head == nullptr) return;
    
            Node* temp = head;
            while (temp->next != nullptr && temp->next != head) {
                temp = temp->next;
            }
            temp->next = head;
        }
    
    };    