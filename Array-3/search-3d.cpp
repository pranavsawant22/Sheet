class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)return 0;
  
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0,high = (m*n)-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(matrix[mid/n][mid%n] == target){
                return 1;
            }
            else if(matrix[mid/n][mid%n] > target){
                high=mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        return 0;
    }
};