#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20};
    int  n = 2;
    
    int j = 0;
    for(int i = 0;i<n;i++)
    {
     if(arr[i]!=0)
       {
          arr[j++]=arr[i];         
       }
       /*else
       {
         count++;
       }*/
    }
    //t = n-int counj;
    for(int i = j;i<n;i++)
    {
        arr[i] = 0;
    }
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}