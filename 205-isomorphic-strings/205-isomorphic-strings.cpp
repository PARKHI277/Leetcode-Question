class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
       unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        
        for(int i =0 ;i < s.length(); i++){
            
            map1[s[i]] = i+1;
            map2[t[i]] = i+1;
        }
        
        for(int i =0 ;i < s.length(); i++){
         
            if (map1[s[i]] != map2[t[i]]){
                return false;
            }
        }
        return true;
    }
};