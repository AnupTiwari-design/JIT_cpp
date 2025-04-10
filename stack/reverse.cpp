#include<iostream>
#include<stack>
using namespace std;
void reverse(string str){
    stack<char> st;
    for(char ch:str){
        st.push(ch);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}

int main()
{
    cout<<"enter a word ="<<endl;
    string str;
    cin>>str;
    reverse(str);
    return 0;
}