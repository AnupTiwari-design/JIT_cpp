#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;
    st.pop();
    cout << "top element" << st.top() << endl;
    if(st.empty()){
        cout<<"empty";
    }
    return 0;
}