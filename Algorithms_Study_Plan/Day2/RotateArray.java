class Solution {
    public void rotate_arr(int[] arr, int start, int end)
    {
        int i = start;
        int j = end;
        
        while(i<=j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
    public void rotate(int[] nums, int k) {
        if(nums.length == 1||k==0){return;}
        
        k = k%nums.length;
        
        //Rotate the last k elements
        rotate_arr(nums,nums.length-1-k+1,nums.length-1);
        //Rotate the first arr.length - 1- k elements(The elements before the last k elements)
        rotate_arr(nums,0,nums.length-1-k);
        //Rotate all the elements
        rotate_arr(nums,0,nums.length-1);
    }
}
