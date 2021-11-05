class Solution {
public:
    int arrangeCoins(int n) {
        int complete = 0;
        for(int i=1;i<=n;i++)
        {
            if(n-i<0)
            {
                break;
            }
            else
            {
                n-=i;
                complete += 1;
            }
        }
        return complete;
        
    }
};
