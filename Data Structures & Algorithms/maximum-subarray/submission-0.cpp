class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0],s=0;
        for(int i=0;i<n;i++){
            if(s<0) s=0;
            s+=nums[i];
            maxi=max(maxi,s);
            
        }
        return maxi;
    }
};
