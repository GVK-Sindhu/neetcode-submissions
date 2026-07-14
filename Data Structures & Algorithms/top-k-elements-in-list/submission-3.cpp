class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int it:nums){
            freq[it]++;
        }
        int n=nums.size();
        vector<vector<int>>bucket(n+1);
        // instead of ele as index we have freq of ele as index
        // same freq ele like if ele 2,3,5 has freq 2 then all stored at bucket[2]
        for(auto it:freq){
            int n=it.first;
            int nfreq=it.second;
            bucket[nfreq].push_back(n);
        }
        vector<int>res;
        // as index denotes freq of ele we dont need to sort just traverse from right to left
        for(int i=bucket.size()-1;i>=0;i--){
            if(bucket[i].size()==0){
                continue;
            }
            while(bucket[i].size()>0 && k>0){
                res.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }
        return res;
    }
};
