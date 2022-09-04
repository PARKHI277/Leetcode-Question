class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) 
    {
        int n = s.length();
        char tmp;
        
        for(int i=0;i<n;i++)
        {
            tmp = s[i];
            for(int j=i+1;j<n;j++)
            {
                if(tmp==s[j])                       
                {
				  
                    if((j-i-1)!=distance[tmp-'a']) return false;
                }
            }
        }
        return true;
    }
};