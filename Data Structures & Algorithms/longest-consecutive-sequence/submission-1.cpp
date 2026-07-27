class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int maxc=0;
        for(int i=0;i<n;i++){
            int c=0;
            if(freq.find(nums[i]-1)==freq.end()){
                int tmp=nums[i];
                c++;
                while(freq.find(tmp+1)!=freq.end()){
                    c++;
                    tmp++;
                }
                maxc=max(maxc,c);
            }
        }
        return maxc;
    }
};
