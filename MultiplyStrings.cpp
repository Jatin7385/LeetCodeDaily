class Solution {
public:
    string multiply(string num1, string num2) {
        string n1 = num1,n2 = num2;
        if(num1 == "0" || num2 == "0")
        {
            return "0";
        }
        reverse(n1.begin(), n1.end());//Reversing num1
        reverse(n2.begin(), n2.end());//Reversing num2
        
        int* mult;
        mult = (int*)calloc(n1.length()+n2.length(), sizeof(int));
        
        for(int i=0;i<n2.length();i++)
        {
            for(int j=0;j<n1.length();j++)
            {
                char c1 = n2[i];
                char c2 = n1[j];
                int c11 = c1 - 48;
                int c22 = c2 - 48;
                
                int m = c11*c22;
                int num = m%10;
                int carry = m/10;
                
                mult[i+j] += num;
                mult[i+j+1] += carry;
            
                
                if(mult[i+j]>9)
                {
                    num = mult[i+j]%10;
                    carry = mult[i+j]/10;
                    
                    mult[i+j] = num;
                    mult[i+j+1] += carry;
                }
                if(mult[i+j+1]>9)
                {
                    num = mult[i+j+1]%10;
                    carry = mult[i+j+1]/10;
                    
                    mult[i+j+1] = num;
                    mult[i+j+2] += carry;
                }
                
            }
        }
        
        string res = "";
        for(int i=0;i<n1.length()+n2.length();i++)
        {
            char c = mult[i] + '0';
            res += c;
        }
        reverse(res.begin(), res.end());//Reversing result
        
        
        for(int i=0;i<res.length();i++)
        {
            if(res[i] == '0')
            {
                cout<<res[i]<<" ";
                res.erase(i,i+1);
                if(res[i] != '0'){break;}
            }
            else
            {
                break;
            }
        }
        return res;
    }
};
