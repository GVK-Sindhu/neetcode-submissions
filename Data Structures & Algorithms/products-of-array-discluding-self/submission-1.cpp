class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,0);
        vector<int>prepro(n,1);
        vector<int>postpro(n,1);
        for(int i=1;i<n;i++){
            prepro[i]=prepro[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            postpro[i]=postpro[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            res[i]=prepro[i]*postpro[i];
        }
        return res;
    }
};