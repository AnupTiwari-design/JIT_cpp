#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseString(string str) {
    queue<char> q;
    stack<char> s;
    for (char ch : str) {
        q.push(ch);
    }
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    cout << "Reversed string: " << reversed << endl;
}
