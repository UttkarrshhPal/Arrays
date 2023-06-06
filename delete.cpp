#include<iostream>
using namespace std;
int main()
{
    int a[] = {3,8,12,5,6};
    int to_del = 12;
    for(int i = 0;i<5;i++)
    {
        if(a[i]==to_del)
        {
            while(i<=4)
            {
                a[i]=a[i+1];
                i++;
            }
        }
    }
    for(int i = 0;i<5;i++)
    {
        cout<<a[i];
    }

}