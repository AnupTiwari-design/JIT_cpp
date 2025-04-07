#include<iostream>
using namespace std;
void move_zero_end(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            c++;
        }
        else{
            if(c>0)
            {
                int temp=arr[i];
                arr[i]=0;
                arr[i-c]=temp;
            }
        }
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
int main()
{
    int arr[]={1,0,1,0,1};
    int n=5;
    move_zero_end(arr,n);
    display(arr,n);
}