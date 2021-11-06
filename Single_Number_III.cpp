class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> freq;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
                freq[nums.at(i)] += 1;
        }
        
        auto iter = freq.begin();
        while (iter != freq.end()) {
            if(iter->second == 1){ans.push_back(iter->first);}
            ++iter;
        }
        return ans;
    }
};
