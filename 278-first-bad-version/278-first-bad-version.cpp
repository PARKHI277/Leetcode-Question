// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n)
    {
        int s = 0;
        int e = n;
        int bad;
        while(s<=e){
            
            int mid = s + (e-s)/2;
            
            if(isBadVersion(mid)){
                bad = mid;
                e = mid-1;
            }
            else
                s = mid+1;
            
        }
        return bad;
    }
};