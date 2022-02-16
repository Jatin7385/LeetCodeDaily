//My solution
class Solution {
    private int res = 0;
    public int recursion(int[] nums, int t, int l, int h)
    {
        if(h>=l)
        {
            int mid = (h+l)/2;
            System.out.println(mid);
            if(nums[mid] == t || mid-1>=l && nums[mid] > t && nums[mid-1]<t)
            {
                return mid;
            }
            else if(mid+1<=h && nums[mid]<t && nums[mid+1]>t)
            {
                return (mid+1);
            }
            else if(nums[l]>t)
            {
                if((l-1)<0)
                {
                    return 0;
                }
                else
                {
                    return (l-1);
                }
            }
            else if(nums[h]<t)
            {
                
                    return (h+1);
            }
            else if(t>nums[mid])
            {
                res = recursion(nums,t,mid+1,h);
            }
            else if(t<nums[mid])
            {
                res = recursion(nums,t,l,mid-1);
            }
        }   
        return res;
    }
    public int searchInsert(int[] nums, int target) {
        return recursion(nums, target, 0, nums.length-1);
    }
}
