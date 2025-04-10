#include<iostream>
using namespace std;

class Stack{
    private:
    int* arr;
    int top;
    int capacity;

public:
Stack(int size) {
    capacity = size;
    arr = new int[capacity];
    top = -1;
}
void push(int value) {
    if (top == capacity - 1) {
        cout << "Stack Overflow" << endl;
        return;
    }
    arr[++top] = value;
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        return;
    }
    top--;
}
int peek() {
    if (top == -1) {
        cout << "Stack is Empty" << endl;
        return -1;
    }
    return arr[top];
}

bool is_empty() {
    return top == -1;
}
void display() {
    for (int i = top; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
}


};
int main() {
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.display();
    st.pop();
    st.display();
    cout << "Top: " << st.peek() << endl;
}