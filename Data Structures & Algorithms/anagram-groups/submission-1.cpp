class Solution {
public:
    string generatestr(string cur){
        vector<int>cnt(26,0);
        for(int i=0;i<cur.size();i++){
            cnt[cur[i]-'a']++;
        }
        string res="";
        for(int i=0;i<26;i++){
            int freq=cnt[i];
            if(cnt[i]>0) res+=string(freq,i+'a');
        }
        return res;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string,vector<string>>mp;
        for(auto it:strs){
            string curstr=it;
            string key=generatestr(curstr);
            mp[key].push_back(it);
        }
        for(auto it:mp){
            res.push_back(it.second);
        }
        return res;
    }
};
