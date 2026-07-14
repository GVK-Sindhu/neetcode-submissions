class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,0);
        int pro=1,zc=0;
        for(int it:nums){
            if(it==0){
                zc++;
                continue;
            }
            pro*=it;
        }
        for(int i=0;i<n;i++){
           if(zc==1 && nums[i]==0) {
            res[i]=pro;
           }
           if(zc==0) res[i]=pro/nums[i];
        }
        return res;
    }
};