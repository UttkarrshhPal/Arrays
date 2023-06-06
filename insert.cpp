#include<iostream>
using namespace std;
int main()
{
    // insert operation in array
    int arr[] = {1,2,4,5};
    int p = 3;
    int element = 3;
    for(int i=3;i<5;i++)
    {
       arr[i+1]=arr[i];
    }
    int k = p-1;
    arr[k] = element;
    //cout<<endl;
    for(int i=1;i<5;i++)
    {
       cout<<arr[i];
    }

}