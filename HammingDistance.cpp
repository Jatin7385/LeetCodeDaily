class Solution {
public:

// function to convert decimal to binary
string decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    string ans = "";
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        ans += binaryNum[j] + '0';
    return ans;
}
    
    int hammingDistance(int x, int y) {
        string b1 = decToBinary(x);
        string b2 = decToBinary(y);
        
        reverse(b1.begin(),b1.end());
        reverse(b2.begin(),b2.end());
        cout<<b1<<" "<<b2<<endl;
        int a,b,hamming = 0;
        string c,d;
        if(b1.length()>b2.length())
        {
            a = b1.length();
            b = b2.length();
            c = b1;
            d = b2;
        }
        else
        {
            a = b2.length();
            b = b1.length();
            c = b2;
            d = b1;
        }
        for(int i=0;i<a;i++)
        {
            if(i>=b)
            {
                if(c[i] == '1'){
                    hamming++;
                }
            }
            else if(c[i] != d[i])
            {
                hamming++;
            }
        }
         return hamming;   
    }
};
