class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xors=0;
        for(int it:nums){
            xors^=it;
        }
        return xors;
    }
};
