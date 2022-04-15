vector<int> res;
     void helper(vector<int> &arr,int n,int sum=0,int i=0){
        if(i==n){
            res.push_back(sum);
            return;
        }
        helper(arr,n,sum+arr[i],i+1);
        helper(arr,n,sum,i+1);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        helper(arr,N);
        return res;
    }