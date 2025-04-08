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

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insert_at_end(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr)
                temp = temp->next;
            temp->next = newNode;
        }
    }
    //diaplay the list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void insert_at_beginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insert_at_position(int value, int pos) {
        if (pos < 1) {
            cout << "Invalid position" << endl;
            return;
        }

        if (pos == 1) {
            insert_at_beginning(value);
            return;
        }
        Node* newNode = new Node(value);
        Node* temp = head;

        for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Position out of range" << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;
        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head = prev;
    }
    void delete_at_beginning() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }
//delete at end
void delete_at_end() {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next->next != nullptr)
        temp = temp->next;

    delete temp->next;
    temp->next = nullptr;
}

};
int main() {
    LinkedList list;

    list.insert_at_end(10);
    list.insert_at_end(20);
    list.insert_at_end(30);
    list.display();

    list.insert_at_beginning(5);
    list.display();

    list.insert_at_position(15, 3);
    list.display();

    list.delete_at_beginning();
    list.display();

    list.delete_at_end();
    list.display();

    list.reverse();
    list.display();

    return 0;
}
