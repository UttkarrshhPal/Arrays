#include<iostream>
using namespace std;
int main()
{
    int a[]={2,7,8,12};
    int max = 0;
    for(int i = 0;i<4;i++)
    {
       if(a[i]>max)
       max = a[i];
    }
    cout<<max;
}