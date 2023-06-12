#include<iostream>
using namespace std;
int main()
{
    int ans = 0;
    int a[] = {-2,-1};
    for(int i = 0;i<2;i++)
    {
        for(int j =i;j<2;j++)
        {
            int sum = 0;
            for(int k=i;k<j;k++)
            {
               cout<<a[k]<<",";
               sum+=a[k];
            }
            cout<<endl;
            cout<<"sum = "<<sum;
            ans = max(ans,sum);
            cout<<endl;
        }
    }
    cout<<"ans ="<<ans;

}