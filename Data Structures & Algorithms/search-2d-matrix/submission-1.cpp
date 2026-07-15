class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int r=0,n=mat[0].size()-1;
        int c=n;
        while(r<mat.size() && c>=0){
            if(mat[r][c]==target){
                return true;
            }
            else if(mat[r][c]<target){
                r++;
            }
            else{
                c--;
            }
        }
        return false;
    }
};
