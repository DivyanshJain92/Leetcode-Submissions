class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int s = 0;
        int e = m*n -1;
        int mid = s + (e-s)/2;
        int i=0;
        int j=0;
        while(s<=e){
            i = mid/n;
            j = mid - (i*n);
            if(matrix[i][j]==target){
                return true;
            }
            else if(target<matrix[i][j]){
                e = mid-1;
            }
            else{
                s = mid +1;
            }
            mid = s + (e-s)/2;
        }
        return false;
    }
};