/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {  
  
    public int firstBadVersion(int n) {
        int h = n;
        int l = 1;
        while(l<h)
        {
            int mid = l+(h-l)/2;
            if(isBadVersion(mid))
            {
                h = mid; //Checking the values before mid
            }
            else
            {
                l = mid+1; //Checking the values after mid
            }
            
        }
        return l;
    }
}
