class Solution {
public:
    vector<int> twoSum(vector<int>& num, int tar) {
        int l = 0;
        int r = num.size()-1;
        while(l<r){
            if(num[l]+num[r]>tar) r--;
            else if(num[l]+num[r]==tar) return {l+1,r+1};
            else l++;
        }
        return {-1,-1};
    }
};
