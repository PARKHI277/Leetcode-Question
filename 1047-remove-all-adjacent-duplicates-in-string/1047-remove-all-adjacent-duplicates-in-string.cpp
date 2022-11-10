class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char>st;
        string ans;
        for(int i = 0;i<n;i++)
        {
            if(st.size() == 0)
            {
                st.push(s[i]);
            }
            else if(s[i] == st.top())
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        
        while(st.size() != 0)
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};