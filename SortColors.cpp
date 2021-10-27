class Solution {
public:
    void sortColors(vector<int>& nums) {
        //One Pass Algorithm
        int freq[] = {0,0,0};
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums.at(i)] += 1;
        }
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<freq[i];j++)
            {
                result.push_back(i);
            }
        }
        
        nums = result;
    }
};
