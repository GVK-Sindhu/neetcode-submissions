class Solution {
public:
    bool isPalindrome(string s) {
        string tmp="";
        for(auto it:s){
            if(isalnum(it)){
                tmp+=tolower(it);
            }
        }
        if(tmp.size()<=1) return true;
        int l=0,r=tmp.size()-1;
        while(l<=r){
            if(tmp[l]!=tmp[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
