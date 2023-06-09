class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // count non zero element
        int n = nums.size();
        int count = 0;
        for(int i = 0 ;i<n;i++)
        {
            if(nums[i]!=0)
            {
                swap (nums[i],nums[count]);
                count++;
            }
        }
        
    }
};
