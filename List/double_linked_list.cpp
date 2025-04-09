#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};
class DoublyLinkedList {
    private:
        Node* head;
        Node* tail;

public:
DoublyLinkedList() {
    head = nullptr;
    tail = nullptr;
}

void insert_at_end(int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int count_nodes() {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}
int find_middle() {
    if (head == nullptr)
        return -1;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}
void remove_duplicates() {
    if (head == nullptr)
        return;

    Node* current = head;

    while (current != nullptr && current->next != nullptr) {
        if (current->data == current->next->data) {
            Node* duplicate = current->next;
            current->next = duplicate->next;
            if (duplicate->next != nullptr)
                duplicate->next->prev = current;
            else
                tail = current;
            delete duplicate;
        } else {
            current = current->next;
        }
    }
}

};
int main(){
    DoublyLinkedList dll;
    dll.insert_at_end(1);
    dll.insert_at_end(2);
    dll.insert_at_end(2);
    dll.insert_at_end(3);
    dll.insert_at_end(4);
    dll.insert_at_end(4);
    dll.insert_at_end(5);
    dll.display();
    cout<<dll.count_nodes()<<endl;
    cout<<dll.find_middle();
}
