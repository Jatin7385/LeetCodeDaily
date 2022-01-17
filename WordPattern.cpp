class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string arr[pattern.length()];
        int start = 0,flag = 0;
        string word = "";
        while(flag != 1)
        {
            word = "";
            for(int j=start;j<s.length();j++)
            {
                if(s.at(j) == ' ')
                {
                    start = j+1;
                    break;
                }
                else if(j == s.length()-1)
                {
                    word += s.at(j);
                    flag = 1;
                    break;
                }
                else
                {
                    word += s.at(j);
                }
            }
            words.push_back(word);
        }
        
        if(words.size() != pattern.length())
        {
            return false;
        }
        
        for(int i=0;i<pattern.length();i++)
        {
            for(int j = 0;j<pattern.length();j++)
            {
                if(pattern.at(i) == pattern.at(j) && words[i] != words[j])
                {
                    return false;
                }
                else if(pattern.at(i) != pattern.at(j) && words[i] == words[j])
                {
                    return false;
                }
                    
            }
        }
        return true;
    }
};
