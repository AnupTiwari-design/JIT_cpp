#include<iostream>
using namespace std;

int even_odd_length(int arr[],int n){
    int count=1,maxi=0;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0&&arr[i-1]%2!=0)||(arr[i]%2!=0&&arr[i-1]%2==0)){
        count++;
        maxi=max(count,maxi);

        }
        else{
            count=1;
        }
    }
    return maxi;
}
int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<even_odd_length(arr,n);

    return 0;
}