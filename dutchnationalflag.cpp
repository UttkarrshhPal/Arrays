 #include<iostream>
 #include<vector>
 using namespace std;
 int main()
 {
        int n ;
        cin>>n;

        vector<int>nums(n);
        for(int i = 0;i<n;i++)
        {
            cin>>nums[i];
        }
       
        int noz=0;
        int noo=1;
        int notw=2;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0) noz++;
            else if(nums[i]==1) noo ++;
            else notw++;
        }
        cout<<noz;
        cout<<noo;
        cout<<notw;
        for(int i=0;i<n;i++){
            if (i<noz) nums[i]=0;
            else if(i<(noz + noo)) nums[i]=1;
            else nums[i]=2;
        }
        return 0;
    }