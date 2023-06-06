#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
    int max = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]>max)
        {
          max = i;
        }
        
    } 
    return max;
}
int second_largest(int arr[],int n)
{
    int Max = largest(arr,n);
    int res = -1;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]!=arr[Max])
        {
            if(res==-1)
            {
                res = i;
            }
            else if(arr[i]>arr[res])
            {
                res=arr[i]; 
            }
            
        }
    }
    return res;
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
   int ans = second_largest(arr,n);
   cout<<ans; 
}