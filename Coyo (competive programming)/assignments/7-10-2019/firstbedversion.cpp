bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int low = 0;
        int high = n;
        
        while(low < high)
        {
            int mid = low + (high - low)/2;
            
            if(isBadVersion(mid) == false && isBadVersion(mid+1) == true)
                return mid+1;
            else if(isBadVersion(mid) == false)
                low = mid+1;
            else
                high = mid;
        }
        
        return low;
    }
};
