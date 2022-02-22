class Solution {
    public void moveZeroes(int[] nums) {
        int count = 0;
        
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i] == 0){count++;}
        }
        int pointer1 = 0;
        int pointer2 = nums.length-1-count+1;
        int temp = pointer1;
        int temp1 = pointer2;

        
        for(int i=0;i<nums.length;i++)
        {
            if(i<pointer2)
            {
                if(nums[i] != 0)
                {
                    int t = nums[i];
                    nums[i] = nums[pointer1];
                    nums[pointer1] = t;
                    pointer1++;
                }
            }
            else
            {
                if(nums[i] != 0)
                {
                    nums[pointer1] = nums[i];
                    nums[i] = 0;
                    pointer1++;
                }
                else
                {
                    nums[i] = 0;   
                }
            }
        }
    }
}
