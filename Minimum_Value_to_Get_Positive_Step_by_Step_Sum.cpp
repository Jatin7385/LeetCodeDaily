class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int flag = 0,startval = 1;
        while(flag == 0)
        {
            int sum = startval;
            int flag1 = 1;
            for(int i=0;i<nums.size();i++)
            {
                sum += nums.at(i);
                if(sum<1)
                {
                    flag1 = 0;
                    break;
                }
            }
            if(flag1 == 0)
            {
              startval++;  
            }
            else
            {
                break;
            }
        }
        return startval;
    }
};
