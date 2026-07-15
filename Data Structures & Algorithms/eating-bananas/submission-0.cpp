class Solution {
public:
    int solve(vector<int>& piles,int mid,int time){
        int hr=0;
        for(int it:piles){
            hr+=(it+mid-1)/mid;
        }
        return hr<=time;
    }
    int minEatingSpeed(vector<int>& piles, int hr) {
        int l=1,h=*max_element(piles.begin(),piles.end());
        int res=INT_MAX;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(solve(piles,mid,hr)){
                res=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};
