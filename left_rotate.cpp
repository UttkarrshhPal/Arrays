#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    // left rotate an array by one postion 
    // left rotation aka anticlockwise rotation
    int temp = arr[0];
    for(int i = 1;i<n;i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    print(arr,n);  
}