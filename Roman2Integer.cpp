class Solution {
public:
    int romanToInt(string s) {
        map<char,int> roman;
        roman.insert(pair<char, int>('I',1));
        roman.insert(pair<char, int>('V',5));
        roman.insert(pair<char, int>('X',10));
        roman.insert(pair<char, int>('L',50));
        roman.insert(pair<char, int>('C',100));
        roman.insert(pair<char, int>('D',500));
        roman.insert(pair<char, int>('M',1000));
        
         int dec = 0,i=0;
        while(i<s.length())
        {
            if(i<s.length()-1 && s.at(i) == 'I' && s.at(i+1) == 'V')
            {
                dec += roman['V'] - roman['I'];
                i++;
            }
            else if(i<s.length()-1 && s.at(i) == 'I' && s.at(i+1) == 'X')
            {
                dec += roman['X'] - roman['I'];
                i++;
            }
            else if(i<s.length()-1 && s.at(i) == 'X' && s.at(i+1) == 'L')
            {
                dec += roman['L'] - roman['X'];
                i++;
            }
            else if(i<s.length()-1 && s.at(i) == 'X' && s.at(i+1) == 'C')
            {
                dec += roman['C'] - roman['X'];
                i++;
            }
            else if(i<s.length()-1 && s.at(i) == 'C' && s.at(i+1) == 'D')
            {
                dec += roman['D'] - roman['C'];
                i++;
            }
            else if(i<s.length()-1 && s.at(i) == 'C' && s.at(i+1) == 'M')
            {
                dec += roman['M'] - roman['C'];
                i++;
            }
            else
            {
                dec += roman[s.at(i)];
            }
        i++;
    }
    return dec;
    }
};
