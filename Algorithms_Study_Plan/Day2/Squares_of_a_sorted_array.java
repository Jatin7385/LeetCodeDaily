class Solution {
    public int[] sortedSquares(int[] nums) {
        // Creating two pointers, one to keep track of the negative elements
        //The other to keep track of the positive element
        //Initializing the two pointers
        
        int n = nums.length;
        int positive_pointer = 0,negative_pointer = 0;
        
        while(positive_pointer<n-1 && nums[positive_pointer]<0)
        {
            positive_pointer++;
        }
            negative_pointer = positive_pointer-1;
        
        //At this stage, positive_pointer points to the first positive number
        //negative_pointer points to the last negative number.
        //Now we start moving from the pointers to the end and the start respectively
        
        int counter = 0;
        int res[] = new int[n];
        while(negative_pointer>=0 && positive_pointer<n)
        {
            //If the square of number at positive pointer < sqare of number at negative pointer, then we add the square of element at the positive_pointer to the array
            if(nums[positive_pointer]*nums[positive_pointer]<nums[negative_pointer]*nums[negative_pointer])
            {
                System.out.println("Hello");
                res[counter] = nums[positive_pointer]*nums[positive_pointer];
                positive_pointer++;
            }
            else
            {
                System.out.println("Hello1");
                res[counter] = nums[negative_pointer]*nums[negative_pointer];
                negative_pointer--;
            }
            counter++;
        }
        
        while(negative_pointer>=0)
        {
            res[counter] = nums[negative_pointer]*nums[negative_pointer];
            negative_pointer--;
            counter++;
        }
        
        while(positive_pointer<n)
        {
            res[counter] = nums[positive_pointer]*nums[positive_pointer];
            positive_pointer++;
            counter++;
        }
        
        return res;
    }
}
