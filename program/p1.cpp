#include<iostream>
using namespace std;

void insert_at_position(int arr[],int n,int e,int pos){
    for(int i=n-1;i>pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=e;

}
void display(int arr[],int n){
    for(int i=0;i<n;i++)
    {
     cout<<arr[i];
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=6;
    int pos=2;
    int ele=8;
    insert_at_position(arr,n,ele,pos);
    display(arr,n);




    return 0;

}
    





