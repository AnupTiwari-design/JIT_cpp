#include <iostream>
#include <stack>
using namespace std;

bool valid_paranthesis(string str) {
    stack<char> s;
    for (char c : str) {
        if (c == '(' || c == '{' || c == '[')
            s.push(c);
        else {
            if (s.empty()) return false;

            char top = s.top();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '['))
                return false;

            s.pop();
        }
    }
    return s.empty();
}

int main() {
    string input;
    cout << "Enter a string with parentheses: ";
    cin >> input;

    if (valid_paranthesis(input))
        cout << "Valid Parentheses" << endl;
    else
        cout << "Invalid Parentheses" << endl;

    return 0;
}