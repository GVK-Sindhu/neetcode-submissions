class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            if(freq.find(target-nums[i])!=freq.end() && freq[target-nums[i]]!=i){
                return {i,freq[target-nums[i]]};
            }
        }
        return {-1,-1};
    }
};
