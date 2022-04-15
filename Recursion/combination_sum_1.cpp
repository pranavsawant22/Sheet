//https://leetcode.com/problems/combination-sum
vector<vector<int>> res;
    vector<int> ans;
    void backtrack(vector<int> &arr,int target,int sum=0,int i=0){
        if(target == sum){
            res.push_back(ans);
            // return;
        }
        if(i > arr.size() || sum>target)return;
        
        for(int j=i;j<arr.size();j++){
            ans.push_back(arr[j]);
            backtrack(arr,target,sum+arr[j],j);
            ans.pop_back();   
        }
        return;
       
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtrack(candidates,target);
      
        return res;
    }