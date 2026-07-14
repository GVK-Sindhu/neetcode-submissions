class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<int,int>f1;
        unordered_map<int,int>f2;
        for(int it:s){
            f1[it]++;
        }
        for(int it:t){
            f2[it]++;
        }
        for(int i=0;i<f1.size();i++){
            if(f1[i]!=f2[i]){
                return false;
            }
        }
        return true;
    }
};
