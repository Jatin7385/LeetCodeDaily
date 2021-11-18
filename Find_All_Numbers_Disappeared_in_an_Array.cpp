class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> num;
        for(int i=0;i<nums.size();i++)
        {
            num.insert(pair<int,int>(nums.at(i),1));
        }
        vector<int> res;
        for(int i=1;i<nums.size()+1;i++)
        {
            if(num[i] == 0){res.push_back(i);}
        }
        return res;
        
    }
};
