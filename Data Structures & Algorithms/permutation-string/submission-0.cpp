class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k=s1.size();
        int n=s2.size();
        int l=0,r=0;
        sort(s1.begin(),s1.end());
        while(r<n){
            if((r-l+1)==k){
                string tmp=s2.substr(l,k);
                sort(tmp.begin(),tmp.end());
                if(s1==tmp){
                    return true;
                }
                l++;
            }
            r++;
        }
        return false;
    }
};
// just saying freq not enough as they must be consecutive to make permutation
// 