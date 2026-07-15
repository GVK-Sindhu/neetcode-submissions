class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int>dq;
        int l=0;
        vector<int>res;
        for(int r=0;r<n;r++){
            while(!dq.empty() && nums[r]>dq.back()){
                dq.pop_back();
            }
            dq.push_back(nums[r]);
            if((r-l+1)==k){
                res.push_back(dq.front());
                if(dq.front()==nums[l]){
                    dq.pop_front();
                }
                l++;
            }
        }
        return res;
    }
};




//[1,2,1,0,4,2,6], k = 3
// the idea is to maintain deque so that we can push,pop ele from both ends
// if in cur window we get max ele we store only that pop all min ele which got before 
// becuase they are not useful if dq.front()==cur window leaving ele then we will pop that
// as this ele will not belong to cur window
