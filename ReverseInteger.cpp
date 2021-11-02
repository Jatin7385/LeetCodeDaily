class Solution {
public:
    int reverse(int x) {
        if(x>=pow(-2,31) && x<=pow(2,31)-1){
        vector<int> rev;
        long res = 0;      
        if(x>=0)
        {
            while(x!=0)
            {
                rev.push_back(x%10);
                cout<<x%10<<endl;
                x/=10;
            } 
            for(int i=0;i<rev.size();i++)
            {
                res += rev.at(i)*pow(10,rev.size()-1-i);
            }
        }
        else
        {
            while(x!=0)
            {
                rev.push_back(-1*(x%10));
                cout<<-1*(x%10)<<endl;
                x/=10;
            } 
            
            for(int i=0;i<rev.size();i++)
            {
                res += rev.at(i)*pow(10,rev.size()-1-i);
            }
            res *= -1;
        }
         if(res>=pow(-2,31) && res<=pow(2,31)-1){
        return (int)res;   
        }
        else
        {
            return 0;
        }
    }
        else{return 0;}
    }
};
