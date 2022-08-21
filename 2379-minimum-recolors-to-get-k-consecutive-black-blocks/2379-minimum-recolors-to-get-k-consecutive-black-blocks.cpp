class Solution {
public:
    int minimumRecolors(string blocks, int k) 
    {int c = 0;
        
        for(int i=0;i<k;i++)
        {
            if(blocks[i] == 'B')
            {
                c++;
            }
        }
        if(c == k)
        {
            return 0;
        }
        int m = INT_MIN;
        m = max(c,m);
        for(int i=k;i<blocks.size();i++)
        {
            if(blocks[i-k] == 'B')
            {
                c--;
            }
            if(blocks[i] == 'B')
            {
                c++;
            }
            m = max(m,c);
            if(c == k)
            {
                return 0;
            }
        }
        
        return (k-m); 
        
    }
};