class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        vector<int> num;
        int n = 0;
        while(x!=0)
        {
            num.push_back(x%10);
            x/=10;
            n++;
        }
        
        int k = n/2;
        for(int i=0;i<k;i++)
        {
            if(num.at(i) != num.at(n-1-i)){return false;}
        }
        return true;
    }
};
