class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums.at(i) + nums.at(j) == target)
                {
                    cout<<nums.at(i)<<" + "<<nums.at(j)<< " = "<<nums.at(i) + nums.at(j)<<" = "<<target<<endl;
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        res.push_back(-1);
        return res;
    }
};

