#include<iostream>
#include<stack>

using namespace std;

void maximum_elem(int arr[],int n){
    stack<int> s;
    for(int i=0;i<n;i++){
         s.push(arr[i]);
    }
    int maxi=0;
    while(!s.empty()){
          int top=s.top();
          maxi=max(top,maxi);
          s.pop();
    }
    cout<<maxi;
}