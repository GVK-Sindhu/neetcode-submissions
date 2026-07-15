class Solution {
public:
    int search(vector<int>& nums, int tar) {
        int l=0,n=nums.size(),h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==tar){
                return mid;
            }
            else{
                if(nums[l]<=nums[mid]){ //left half sorted
                    if(tar>=nums[l] && tar<nums[mid]){
                        h=mid-1;
                    }
                    else{
                        l=mid+1;
                    }
                }
                else{ //right half sorted
                    if(tar>nums[mid] && tar<=nums[h]){
                        l=mid+1;
                    }
                    else{
                        h=mid-1;
                    }
                }
            }
        }
        return -1;
    }
};
