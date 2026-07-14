class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string,vector<string>>tmp;
        for(auto it:strs){
            string str=it;
            sort(str.begin(),str.end());
            tmp[str].push_back(it);
        }
        for(auto it:tmp){
            res.push_back(it.second);
        }
        return res;
    }
};
