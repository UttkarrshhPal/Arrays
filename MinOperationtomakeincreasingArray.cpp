https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/description/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        if(n==1)
        return 0;
        for(int i = 0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
               count+=abs((nums[i]+1)-nums[i+1]);
               nums[i+1]=nums[i]+1;

            }
           else if(nums[i]==nums[i+1])
           {
               nums[i+1]+1;
               nums[i+1] = nums[i+1]+1;
               count++;
           }
        }
        return count;
        
    }
};
