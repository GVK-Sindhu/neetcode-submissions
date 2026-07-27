class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>cur;
        dfs(nums,target,cur,0);
        return res;
    }
    void dfs(vector<int>& nums, int tar,vector<int>&cur,int i){
        if(tar==0){
            res.push_back(cur);
            return;
        }
        if(tar<0 || i>=nums.size()){
            return;
        }
        cur.push_back(nums[i]);
        dfs(nums,tar-nums[i],cur,i);
        cur.pop_back();
        dfs(nums,tar,cur,i+1);
    }
};
