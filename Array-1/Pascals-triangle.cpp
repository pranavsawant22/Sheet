Problem link : https://leetcode.com/problems/pascals-triangle/
class Solution {
public:

    vector<vector<int>> generate(int n) {

        if(n==1){
            return {{1}};
        }
        vector<vector<int>> ans(n);
      
        for(int i=0;i<n;i++){
            ans[i].resize(i+1);
            ans[i][0] = ans[i][i] = 1;
            for(int j=1;j<i;j++){
                ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
            }
        }
        return ans;
    }
};