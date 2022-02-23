class Solution {
  
    public int[] twoSum(int[] numbers, int target) {
        int[] fin = {0,0}; 
        
        int p1 = 0;
        int p2 = numbers.length-1;
        
        while(p2>p1)
        {
            if(numbers[p1] + numbers[p2] == target)
            {
                fin[0] = p1+1;
                fin[1] = p2+1;
                return fin;
            }
            else if(numbers[p1] + numbers[p2] > target)
            {
                p2--;
            }
            else if(numbers[p2] + numbers[p1] < target)
            {
                p1++;
            }
        }
        
        
        return fin;
    }
}
