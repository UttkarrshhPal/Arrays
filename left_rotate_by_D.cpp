#include<iostream>
using namespace std;
void left_rotate_One(int arr[],int n)
{
    int temp = arr[0];
    for(int i = 1;i<n;i++)
    {
        arr[i-1]= arr[i];
    }
    arr[n-1] = temp;

}
void left_rotate(int arr[],int n,int d)
{
    for(int  i= 0;i<d;i++)
    {
       left_rotate_One(arr,n);   
    }
}
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
     int d = 2;
     left_rotate(arr,5,2);
     print(arr,n);
     
} 