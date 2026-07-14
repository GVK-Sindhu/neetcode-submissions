class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int it:nums){
            freq[it]++;
        }
        vector<pair<int,int>>tmp;
        for(auto it:freq){
            int num=it.first;
            int numfreq=it.second;
            tmp.push_back({numfreq,num});
        }
        sort(tmp.begin(),tmp.end(),[](pair<int,int>&a,pair<int,int>&b){
            return a.first>b.first;
        });
        vector<int>res;
        for(auto it:tmp){
            if(k>0) {
                res.push_back(it.second);
                k--;
            }
            else break;
        }
        return res;
    }
};
