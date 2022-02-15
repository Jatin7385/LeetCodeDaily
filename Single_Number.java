class Solution {
    public int singleNumber(int[] nums) {
        int res = 0;
        for(int a:nums)
        {
            res^=a;
        }
        return res;
    }
}

//Explaination : 
/*
Have used Bit manipulation(XOR Operation). We know that when a number is xor'd with itself even number of times, we get a 0.
And when a number is xor'd with itself odd number of times, we get the number itself.
When we loop through this array, since each element in the array occurs twice, it gets cancelled out at some point giving us a 0
for those numbers. At the end, the only number left would be the number that occurs once.*/
