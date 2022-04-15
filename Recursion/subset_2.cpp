//https://leetcode.com/problems/subsets-ii
vector<vector<int>> ans;
    vector<int> res;
    void helper(vector<int> &arr,int i=0){
        
            ans.push_back(res);
            
        
        for(int j=i;j<arr.size();j++){
            if(j and arr[j]==arr[j-1] and j>i)continue;
            res.push_back(arr[j]);
            helper(arr,j+1);
            res.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        helper(nums);
        return ans;
    }