//https://leetcode.com/problems/combination-sum-ii
set<vector<int>> res;
    vector<int> ans;
    void backtrack(vector<int> &arr,int target,int sum=0,int i=0){
        if(target == sum){
            res.insert(ans);
            // return;
        }
        if(i > arr.size() || sum>target)return;
        
        for(int j=i;j<arr.size();j++){
            if(j>0 and arr[j] == arr[j-1] and j>i)continue;
            ans.push_back(arr[j]);
            backtrack(arr,target,sum+arr[j],j+1);
            ans.pop_back();   
        }
        return;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        backtrack(candidates,target);
        vector<vector<int>> arr(res.begin(),res.end());
        return arr;
    }