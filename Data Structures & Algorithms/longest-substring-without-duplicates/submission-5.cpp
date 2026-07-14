class Solution {
public:
    bool isdist(string tmp){
        unordered_map<int,int>freq;
        for(auto it:tmp){
            freq[it]++;
        }
        for(auto it:freq){
            if(it.second>=2){
                return false;
            }
        }
        return true;
    }
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,n=s.size();
        vector<int>prvchar(256,-1);
        int maxlen=0;
        while(r<n){
            if(prvchar[s[r]] > -1){
                l=max(l,prvchar[s[r]]+1);
            }
            prvchar[s[r]]=r;
            maxlen=max(maxlen,(r-l+1));
            r++;
        }
        return maxlen;
    }
};
