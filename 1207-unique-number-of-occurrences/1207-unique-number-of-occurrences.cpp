#include<map>
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        map<int,int>m;
        for(int i = 0;i<n;i++)
        {
            m[arr[i]]++;
        }
        set<int>st;
        for(auto it : m)
        {
            if(st.count(it.second))
            {
                return false;
            }
            
            st.insert(it.second);
        }
        
        return true;
    }
};

