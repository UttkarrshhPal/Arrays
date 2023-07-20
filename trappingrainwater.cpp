
#include<iostream>
#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <iterator>
#include <sstream>
#include <iomanip>
using namespace std;
int main(){
int arr[] = {5,0,0,2,0,4};
int n = 6;
int res = 0;
for(int i=1;i<n-1;i++)
{
    int left = arr[i];
    for(int j = 0;j<i;j++)
    {
         left = max(left,arr[j]);
    }
    cout<<"left:"<<left<<endl;

    int right = arr[i];
    for(int j = i+1;j<n;j++)
    {
        right = max(right,arr[j]);
    }
    cout<<"right:"<<right<<endl;


    res = res + (min(left,right)-arr[i]);
}
cout<<res;
return 0;
}
----------------------------------------------------------------------------------------------------------------------------------------
    
#include<iostream>
#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <iterator>
#include <sstream>
#include <iomanip>
using namespace std;
int main(){
int arr[] = {5,0,0,2,0,4};
int n = 6;
int res = 0;
int lmax[n];
int rmax[n];

lmax[0] = arr[0];
for(int i=1;i<n-1;i++)
{
   lmax[i] = max(arr[i],lmax[i-1]);
}

rmax[n-1] = arr[n-1];
for(int i = n-2;i>=0;i--)
{
    rmax[i] = max(arr[i],rmax[i+1]);
}

for(int i = 1;i<n-1;i++)
res = res+(min(lmax[i],rmax[i])-arr[i]);


cout<<res<<endl;
}
    
