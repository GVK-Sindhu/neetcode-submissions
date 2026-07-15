class Solution {
public:
    int maxArea(vector<int>& h) {
      int l=0,r=h.size()-1;
      int marea=0;
      while(l<=r){
        int len=min(h[l],h[r]);
        int w=(r-l);
        marea=max(marea,(len*w));
        if(h[l]>h[r]){
            r--;
        }
        else{
            l++;
        }
      }
      return marea;
    }
};
// 