#include<iostream>
using namespace std;
int max_diff(int arr[],int n)
{
    int res = arr[1]-arr[0];
     for(int i =0;i<n-1;i++)
     {
        for(int j = i+1;j<n;j++)
        {
            res = max(res,arr[j]-arr[i]);
        }
     }
     return res;
}
int main()
{
   int arr[]={2,3,10,6,4,8,1};
   int n = 6;
   cout<< max_diff(arr,n);

}
___________________________________________________________________________________________________________________________________________-
   #include<iostream>
using namespace std;
int max_diff(int arr[],int n)
{
      // max_difference = arr[j]-min_Value se milega
      //min_value = min(min_value,arr[j])
      int res = arr[1]-arr[0];
      int min_value = arr[0];
      for(int j = 1;j<n;j++)
      {
        res = max(res,arr[j]-min_value);
        min_value = min(min_value,arr[j]);

      }
      return res;
}
int main()
{
   int arr[]={2,3,10,6,4,8,1};
   int n = 6;
   cout<< max_diff(arr,n);

}
