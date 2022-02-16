class Solution {
    
    public int binarySearch(int[] nums, int t, int l, int h)
    {
        int res = -1;
        if(h>=l)
        {
            int mid = (l+h)/2;
            if(nums[mid] == t)
            {
                return mid;
            }
            else if(t>nums[mid])
            {
                res = binarySearch(nums,t,mid+1,h);
            }
            else if(t<nums[mid])
            {
                res = binarySearch(nums,t,l,mid-1);
            }
        }
        return res;
    }
    public int search(int[] nums, int target) {
        return binarySearch(nums,target,0,nums.length-1);
    }
}
