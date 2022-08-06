class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) 
    {
        int x = minutesToTest /minutesToDie + 1;
        int l = 0, r = 1000;
        while (l < r) {
            int m = l + (r - l) / 2;
            if (pow(x, m) < buckets) l = m + 1;
            else r = m;
        }
        return l;
    }
};