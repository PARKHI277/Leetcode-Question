class Solution {
public:
    
    

    string frequencySort(string s) {
   map<char, int>m;
		for(int i=0; i<s.size(); i++){m[s[i]]++;}
		priority_queue<pair<int, char>>q;
		for(auto it: m){
			q.push({it.second, it.first});
		}
		string ans="";
		while(!q.empty()){
			int cnt=q.top().first;
			while(cnt--){ans+=q.top().second;}
			q.pop();
		}
		return ans;
    }
};

