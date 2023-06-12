#include<iostream>
using namespace std;

// function to find majority element
int findmajority(int a[],int n)
{
    // hamara candidate
    int candidate = -1;
    // usko kitne votes pade
    int votes = 0;
    // concept ye hai ke argar uske votes 0 hogye toh candidate majority me nhi hai and we will increment the candidate
    for(int i = 0;i<n;i++)
    {
        if(votes == 0)
        {
            candidate = a[i];
            votes = 1;
        }
        else{
            if(a[i]==candidate)
            votes++;
            else
            votes--;
        }   
    }
    int count = 0;
    for(int i = 0;i<n;i++)
    {
       if(a[i]==candidate)
       count++;
    }
    if(count >n/2)
    return candidate;
    else
    return -1;


}
int main()
{
    int arr[] = {1,1,1,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int majority = findmajority(arr,n);
    cout<<"The majority element is:"<<majority;
    return 0;
}
