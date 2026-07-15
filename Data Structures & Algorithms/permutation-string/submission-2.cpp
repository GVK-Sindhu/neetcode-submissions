class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        int n=s2.size();
        int l=0,r=0;
        vector<int>sf1(26,0);
        for(auto it:s1){
            sf1[it-'a']++;
        }
        vector<int>sf2(26,0);
        while(r<n){
            sf2[s2[r]-'a']++;
            if((r-l+1)==k){
                if(sf1==sf2){
                    return true;
                }
                sf2[s2[l]-'a']--;
                l++;
            }
            r++;
        }
        return false;
    }
};
// just saying freq not enough as they must be consecutive to make permutation
// to see if there is permutation in s2 1 basic truth is the permutation size==s1.size()
// so we will do a fixed sliding window and compare each window str to s1 